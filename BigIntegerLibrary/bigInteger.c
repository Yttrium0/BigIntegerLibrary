#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

}

int *addition(int *nbr1, int *nbr2)
{
    int retenue = 0;

    char nb1[] = *nbr1;
    char nb2[] = *nbr2;

    char resultat[strlen(nb1) + 1];


}

int *inverseTableau(int *tableau)
{
    char liste[] = *tableau;
    int n = strlen(liste);
    char resultat[n];
    
    for(int i = 0; i < n+1; i++)
    {
        resultat[i] = liste[n-i];
    }

    return &resultat;
}