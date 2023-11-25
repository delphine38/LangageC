#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    // insert code here..
    // printf("Hello, World\n");
    // return 0;

    int nombreDeVies = 5, niveau = 1;
    printf("vous avez %d vies et vous etes au niveau n� %d\n", nombreDeVies, niveau);
    printf("*** B A M ***\n");
    nombreDeVies = 4;
    printf("ah desole, il ne vous reste plus que %d vies maintenant ! \n\n", nombreDeVies);
    return 0;
}
