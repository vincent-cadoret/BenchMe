#include <stdio.h>
#include <time.h>

/**
 * Cette fonction a pour objectif d'afficher via le printf, chaque valeur du
 * tableau passé en parametre.
 * @param unTableau
 * @param tab_max
 */
void printArray(float *unTableau, int tab_max){
    for (int i = 0; i < tab_max ; i++){
        printf("%.2f\n", unTableau[i]);
    }
}

/**
 * Cette fonction recoit un temps de départ et un temps d'arrivé quelle compare
 * et affiche la différence entre les deux valeurs.
 * @param t1
 * @param t2
 * @return time
 */
double tempsTotalsFonctions(clock_t t1, clock_t t2){
    double time = (double)(t2 - t1)/CLOCKS_PER_SEC;
    return time;
}

/**
 * Cette fonction recoit deux tableaux et inverses les valeurs de ces tableaux.
 * @param foo
 * @param bar
 */
void inverse(float *foo, float *bar) {
    float tmp = *foo;
    *foo = *bar;
    *bar = tmp;
}
void writeFile(const char *unNomFichier, float unTemps){
    const char value = (char)unTemps;
    printf("%s", value);
    FILE *fp;
    fp = fopen(&unNomFichier[0], "a");
    fprintf(fp, &value); // problème de value qui ne rentre pas.
    fclose(fp);
}

/**
 * triSelection récupére un tableau et uneTaille de tableau. La fonction effectue
 * ensuite un tri par selection selon la méthode mathématique.
 * Le tri par sélection (ou tri par extraction) est un algorithme de tri par
 * comparaison. Cet algorithme est simple, mais considéré comme inefficace car il
 * s'exécute en temps quadratique en le nombre d'éléments à trier, et non en temps
 * pseudo linéaire.
 * Sur un tableau de n éléments (numérotés de 0 à n-1 , attention un tableau de 5
 * valeurs (5 cases) sera numéroté de 0 à 4 et non de 1 à 5), le principe du tri
 * par sélection est le suivant : rechercher le plus petit élément du tableau, et
 * l'échanger avec l'élément d'indice 0 ; rechercher le second plus petit élément
 * du tableau, et l'échanger avec l'élément d'indice 1 ; continuer de cette façon
 * jusqu'à ce que le tableau soit entièrement trié.
 * @param unTableau
 * @param uneTaille
 */
void triSelection(float unTableau[], int uneTaille){
    float temp;
    int index;
    for (int i = 0; i < (uneTaille - 1); i++){
        index = i;
        for (int j = i + 1; j < uneTaille; j++){
            if (unTableau[index] > unTableau[j]){
                index = j;
            }
        }
        if (index != i){
            temp = unTableau[i];
            unTableau[i] = unTableau[index];
            unTableau[index] = temp;
        }
    }
}

/**
 * triInsertion récupére un tableau et uneTaille de tableau. La fonction effectue
 * ensuite un tri par insertion selon la méthode mathématique.
 * En informatique, le tri par insertion est un algorithme de tri classique.
 * La plupart des personnes l'utilisent naturellement pour trier des cartes à jouer1.
 * En général, le tri par insertion est beaucoup plus lent que d'autres algorithmes
 * comme le tri rapide (ou quicksort) et le tri fusion pour traiter de grandes
 * séquences, car sa complexité asymptotique est quadratique.
 * Le tri par insertion considère chaque élément du tableau et l'insère à la bonne
 * place parmi les éléments déjà triés. Ainsi, au moment où on considère un élément,
 * les éléments qui le précèdent sont déjà triés, tandis que les éléments qui le
 * suivent ne sont pas encore triés. Pour trouver la place où insérer un élément parmi
 * les précédents, il faut le comparer à ces derniers, et les décaler afin de libérer
 * une place où effectuer l'insertion. Le décalage occupe la place laissée libre par
 * l'élément considéré. En pratique, ces deux actions s'effectuent en une passe, qui
 * consiste à faire « remonter » l'élément au fur et à mesure jusqu'à rencontrer un
 * élément plus petit.
 * @param unTableau
 * @param uneTaille
 */
void triInsertion(float unTableau[], int uneTaille){
    int j;
    float temp;
    for (int i = 1 ; i <= uneTaille - 1; i++) {
        j = i;
        while (j > 0 && unTableau[j - 1] > unTableau[j]) {
            temp = unTableau[j];
            unTableau[j] = unTableau[j - 1];
            unTableau[j - 1] = temp;
            j--;
        }
    }
}

/**
 * triBulle récupére un tableau et uneTaille de tableau. La fonction effectue
 * ensuite un tri à bulles selon la méthode mathématique.
 * Le tri à bulles ou tri par propagation1 est un algorithme de tri. Il consiste à
 * comparer répétitivement les éléments consécutifs d'un tableau, et à les permuter
 * lorsqu'ils sont mal triés. Il doit son nom au fait qu'il déplace rapidement les
 * plus grands éléments en fin de tableau, comme des bulles d'air qui remonteraient
 * rapidement à la surface d'un liquide.
 * Après un premier parcours complet du tableau, le plus grand élément est forcément
 * en fin de tableau, à sa position définitive. En effet, aussitôt que le plus grand
 * élément est rencontré durant le parcours, il est mal trié par rapport à tous les
 * éléments suivants, donc échangé à chaque fois jusqu'à la fin du parcours. Après le
 * premier parcours, le plus grand élément étant à sa position définitive, il n'a plus
 * à être traité. Le reste du tableau est en revanche encore en désordre. Il faut donc
 * le parcourir à nouveau, en s'arrêtant à l'avant-dernier élément. Après ce deuxième
 * parcours, les deux plus grands éléments sont à leur position définitive. Il faut donc
 * répéter les parcours du tableau, jusqu'à ce que les deux plus petits éléments soient
 * placés à leur position définitive.
 * @param unTableau
 * @param uneTaille
 */
void triBulle(float unTableau[], int uneTaille){
    float tmp;
    for (int i = 0; i < uneTaille - 1; i++){
        for (int j = 0; j < uneTaille - i - 1; j++){
            if (unTableau[j] > unTableau[j + 1]){
                tmp = unTableau[j];
                unTableau[j] = unTableau[j + 1];
                unTableau[j + 1] = tmp;
            }
        }
    }
}

/**
 * En informatique, le tri par tas est un algorithme de tri par comparaisons. Cet algorithme
 * est de complexité asymptotiquement optimale, c'est-à-dire que l'on démontre qu'aucun
 * algorithme de tri par comparaison ne peut avoir de complexité asymptotiquement meilleure.
 * Sa complexité est proportionnelle à n log n où n est la longueur du tableau à trier.
 * Le tri par tas se fait en place, c’est-à-dire qu’il ne nécessite pas l'allocation d'une zone
 * mémoire supplémentaire (plus précisément il ne nécessite qu'une allocation d'une zone mémoire
 * de taille O(1). Par contre, il n'est pas stable.
 * Dans l'algorithme, on cherche à obtenir un tas, c'est-à-dire un arbre binaire vérifiant les
 * propriétés suivantes (les deux premières propriétés découlent de la manière dont on considère
 * les éléments du tableau) : la différence maximale de profondeur entre deux feuilles est de 1
 * (i.e. toutes les feuilles se trouvent sur la dernière ou sur l'avant-dernière ligne) ;
 * les feuilles de profondeur maximale sont « tassées » sur la gauche. chaque nœud est de valeur
 * supérieure (resp. inférieure) à celles de ses deux fils, pour un tri ascendant (resp. descendant).
 * Il en découle que la racine du tas (le premier élément) contient la valeur maximale (resp. minimale)
 * de l'arbre. Le tri est fondé sur cette propriété.
 * @param unTableau
 * @param foo
 * @param index
 */
void heapify(float unTableau[], int foo, int index) {
    int max = index;
    int gauche = 2 * index + 1;
    int droite = 2 * index + 2;

    if (gauche < foo && unTableau[gauche] > unTableau[max]){
        max = gauche;
    }
    if (droite < foo && unTableau[droite] > unTableau[max]){
        max = droite;
    }
    if (max != index) {
        inverse(&unTableau[index], &unTableau[max]);
        heapify(unTableau, foo, max);
    }
}
void triTas(float unTableau[], int uneTaille) {
    for (int i = uneTaille / 2 - 1; i >= 0; i--){
        heapify(unTableau, uneTaille, i);
    }
    for (int i = uneTaille - 1; i >= 0; i--) {
        inverse(&unTableau[0], &unTableau[i]);
        heapify(unTableau, i, 0);
    }
}
