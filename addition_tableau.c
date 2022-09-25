#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int nb1, int nb2);
char *addition(char *n1, char *n2);
char* inverseTableau(char *tableau);

int main(int argc, char *argv[])
{
    printf("chiffre: %s\n", inverseTableau(addition(inverseTableau(argv[1]), inverseTableau(argv[2]))));
    return 0;
}

int min(int nb1, int nb2)
{
    if(nb1 < nb2)
        return nb1;
    return nb2;
}

char* inverseTableau(char *tableau)
{
    char *nvTableau;
    int n = strlen(tableau);
    nvTableau = malloc((n-1) * sizeof(char));
    
    for(int i = 0; i<n; i++)
    {
        nvTableau[i] = tableau[n-i-1];
    }

    return nvTableau;
}

char *addition(char *n1, char *n2)
{
    int ch1, ch2, retenu, res;
    char ch1_char[2], ch2_char[2];
    retenu = 0;
    int n = min(strlen(n1),strlen(n2));
    char *resultat = malloc((n+1)*sizeof(char));
    
    for(int i = 0; i < n; i++)
    {
        sprintf(ch1_char, "%c", n1[i]);
        sprintf(ch2_char, "%c", n2[i]);
        
        ch1 = atoi(ch1_char);
        ch2 = atoi(ch2_char);
        res = ch1 + ch2 + retenu;
        retenu = 0;
        if(res > 9)
        {
            res = res - 10;
            retenu++;
        }
        resultat[i] = res + '0';
    }
    if(retenu == 1)
        strcpy(&resultat[n], "1");

    return resultat;

}

