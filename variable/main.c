#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    // insert code here..
    // printf("Hello, World\n");
    // return 0;

    // int nombreDeVies = 5, niveau = 1;
    // printf("vous avez %d vies et vous etes au niveau n� %d\n", nombreDeVies, niveau);
    // printf("*** B A M ***\n");
    // nombreDeVies = 4;
    // printf("ah desole, il ne vous reste plus que %d vies maintenant ! \n\n", nombreDeVies);
    // return 0;

    // int age = 0; // on initialise
    // printf("Quel age avez-vous ?");
    // scanf("%d", age); // on demande d'entrer l'�ge avec scanf
    // printf("ah ! Vous avez donc %d ans !\n\n", age);
    // return 0;

    /*int resultat = 0;
    resultat = 5 + 3;
    printf("5+3 = %d", resultat);
    */

    /*int resultat = 0;
    resultat = (5 / 2);
    printf("5/2 = %d", resultat);
    */
    // cela donne un résultat érronné

    /*double resultat = 0;
    resultat = 5.0 / 2.0;
    printf("5/2= %1f", resultat);
    // aussi appeler MODULO de la division
    */

    /*int resultat = 0;
    resultat = (1 + 1);
    printf("1+1 = %d", resultat);
    return 0;
    */

    int resultat = 0, nombre1 = 0, nombre2 = 0;
    printf("Entrer le nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Entrer le nombre 2 : ");
    scanf("%d", &nombre2);

    resultat = nombre1 + nombre2;

    printf("%d +%d =%d\n", nombre1, nombre2, resultat);
    return 0;
}
