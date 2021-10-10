
# Bench Me
CPE Lyon - 3ICS - Année 2021/22
Développement informatique - 1
**TP 2 - Algorithmes de tri**
Dimanche 10 Octobre

## Pour commencer
Dans ce TP vous allez devoir :
- Implémenter 4 algorithmes de tri (tri a bulle, tri par sélection, tri par insertion, tri pas tas)
permettant un tri croissant ou décroissant d’un tableau de nombre a virgules (float)
- Écrire le code permettant de faire des mesures du temps d’exécution de chacun de ces quatre
algorithmes en fonction de la taille des tableaux à trier. Les résultats des benchmarks permettront
d’avoir une estimation de la complexité temporelle.
- Stocker les résultats des tests dans un fichier au format csv permettant d’utiliser un grapheur
(excel, gnuplot, ...)
- Générer une documentation technique à partir des annotations et documentations présentes
dans le code.
- Écrire le fichier README.md décrivant l’objet du projet, l’usage des commandes, les
résultats attendus et les évolutions à venir.
Pour que les résultats soient probants : vous devez respecter 4 contraintes :
- Les tableaux avant tri doivent être les mêmes pour chaque algorithme testé (cf notion de
nombre pseudo aléatoire et de graine)
- Chaque algorithme devra être testé 3 fois avec des tableaux différents. Vous ne garderez que la
valeur moyenne des trois tests.
- Vous devez trier des tableaux contenant des valeurs aléatoires comprises entre 0 et 106
- Vous devez réaliser les tests avec des tableaux contenants respectivement 100, 103, 104,
105,106,107 valeurs

### Fonctions principales
- **Fonctions Tri à bulles (TriBulle):**
triBulle récupére un tableau et uneTaille de tableau. La fonction effectue ensuite un tri à bulles selon la méthode mathématique. Le tri à bulles ou tri par propagation1 est un algorithme de tri. Il consiste à comparer répétitivement les éléments consécutifs d'un tableau, et à les permuter lorsqu'ils sont mal triés. Il doit son nom au fait qu'il déplace rapidement les plus grands éléments en fin de tableau, comme des bulles d'air qui remonteraient rapidement à la surface d'un liquide. Après un premier parcours complet du tableau, le plus grand élément est forcément en fin de tableau, à sa position définitive. En effet, aussitôt que le plus grand élément est rencontré durant le parcours, il est mal trié par rapport à tous les éléments suivants, donc échangé à chaque fois jusqu'à la fin du parcours. Après le premier parcours, le plus grand élément étant à sa position définitive, il n'a plus à être traité. Le reste du tableau est en revanche encore en désordre. Il faut donc le parcourir à nouveau, en s'arrêtant à l'avant-dernier élément. Après ce deuxième parcours, les deux plus grands éléments sont à leur position définitive. Il faut donc répéter les parcours du tableau, jusqu'à ce que les deux plus petits éléments soient placés à leur position définitive.
@param unTableau
@param uneTaille

- **Fonctions Tri par sélection (triSelection):**
triSelection récupère un tableau et uneTaille de tableau. La fonction effectue ensuite un tri par sélection selon la méthode mathématique. Le tri par sélection (ou tri par extraction) est un algorithme de tri par comparaison. Cet algorithme est simple, mais considéré comme inefficace car il s'exécute en temps quadratique en le nombre d'éléments à trier, et non en temps pseudo linéaire. Sur un tableau de n éléments (numérotés de 0 à n-1 , attention un tableau de 5 valeurs (5 cases) sera numéroté de 0 à 4 et non de 1 à 5), le principe du tri par sélection est le suivant : rechercher le plus petit élément du tableau, et l'échanger avec l'élément d'indice 0 ; rechercher le second plus petit élément du tableau, et l'échanger avec l'élément d'indice 1 ; continuer de cette façon jusqu'à ce que le tableau soit entièrement trié.
@param unTableau
@param uneTaille

- **Fonctions Tri par insertion (triInsertion):**
triInsertion récupére un tableau et uneTaille de tableau. La fonction effectue ensuite un tri par insertion selon la méthode mathématique. En informatique, le tri par insertion est un algorithme de tri classique.  La plupart des personnes l'utilisent naturellement pour trier des cartes à jouer1. En général, le tri par insertion est beaucoup plus lent que d'autres algorithmes comme le tri rapide (ou quicksort) et le tri fusion pour traiter de grandes séquences, car sa complexité asymptotique est quadratique. Le tri par insertion considère chaque élément du tableau et l'insère à la bonne place parmi les éléments déjà triés. Ainsi, au moment où on considère un élément, les éléments qui le précèdent sont déjà triés, tandis que les éléments qui le suivent ne sont pas encore triés. Pour trouver la place où insérer un élément parmi les précédents, il faut le comparer à ces derniers, et les décaler afin de libérer une place où effectuer l'insertion. Le décalage occupe la place laissée libre par l'élément considéré. En pratique, ces deux actions s'effectuent en une passe, qui consiste à faire « remonter » l'élément au fur et à mesure jusqu'à rencontrer un élément plus petit.
@param unTableau
@param uneTaille

- **Fonctions Tri par tas (heapify && triTas):**
En informatique, le tri par tas est un algorithme de tri par comparaisons. Cet algorithme est de complexité asymptotiquement optimale, c'est-à-dire que l'on démontre qu'aucun algorithme de tri par comparaison ne peut avoir de complexité asymptotiquement meilleure. Sa complexité est proportionnelle à n log n où n est la longueur du tableau à trier. Le tri par tas se fait en place, c’est-à-dire qu’il ne nécessite pas l'allocation d'une zone mémoire supplémentaire (plus précisément il ne nécessite qu'une allocation d'une zone mémoire de taille O(1). Par contre, il n'est pas stable. Dans l'algorithme, on cherche à obtenir un tas, c'est-à-dire un arbre binaire vérifiant les propriétés suivantes (les deux premières propriétés découlent de la manière dont on considère les éléments du tableau) : la différence maximale de profondeur entre deux feuilles est de 1 (i.e. toutes les feuilles se trouvent sur la dernière ou sur l'avant-dernière ligne) ; les feuilles de profondeur maximale sont « tassées » sur la gauche. chaque nœud est de valeur supérieure (resp. inférieure) à celles de ses deux fils, pour un tri ascendant (resp. descendant). Il en découle que la racine du tas (le premier élément) contient la valeur maximale (resp. minimale) de l'arbre. Le tri est fondé sur cette propriété.
@param unTableau
@param foo
@param index
 
### Fonctions secondaire

- **Fonction printArray:**
Permet d'initialiser le tableau.
- **Fonction tempsTotalsFonctions:**
Permet de calculer le la différence (en secondes) entre le lancement du programme et la fin du programme.

- **Fonction inverse:**
Permet d'inverser les valeurs d'un tableau (Z -> A; A-> Z).
@param moyenne
@param num
@param fichier

- **Fonction writeValue:**
Crée le fichier
@param fichier
@param unChiffre

- **Fonction writeBreak:**
@param fichier
@param unePuissance

- **Fonction writeSeed:**
@param fichier
@param uneSeed

## Démarrage
Pour lancer le programme, il faut exécuter la commande suivante depuis un terminal de cmd:
`cd /emplacement du fichier/`   
`BenchMe.exe param1 param2`

## Auteurs
* **Vincent Cadoret** _alias_ [@vincent-cadoret](https://github.com/vincent-cadoret)
* **Mustafa Harbutoglu** _alias_ [@MustafaHar](https://github.com/MustafaHar)

## Evolution à venir
Pour l'instant, aucune évolution du programme est envisagé. 
Si la décision change, vous serez informé aussitôt.

## Sources:
**Wikipedia:**
- [Tri à bulles](https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles) - Wikipedia
- [Tri par sélection](https://fr.wikipedia.org/wiki/Tri_par_s%C3%A9lection) - Wikipedia
- [Tri par insertion](https://fr.wikipedia.org/wiki/Tri_par_insertion) - Wikipedia
- [Tri par tas](https://fr.wikipedia.org/wiki/Tri_par_tas) - Wikipedia




