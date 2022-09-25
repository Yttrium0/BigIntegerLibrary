#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int nb1, int nb2);
char *addition(char *n1, char *n2);
char* inverseTableau(char *tableau);

int main(int argc, char *argv[])
{
    printf("chiffre: %s\n", addition(inverseTableau(argv[1]), inverseTableau(argv[2])));
    return 0;
}

int max(int nb1, int nb2)
{
    if(nb1 < nb2)
        return nb1;
    return nb2;
}

char* inverseTableau(char *tableau)
{
    printf("Dans la fonction inserse tableau: %s\n", tableau);
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
    printf("Dans la fonction: %s, %s\n", n1, n2);
    int ch1, ch2, retenu, res;
    char ch1_char[2], ch2_char[2];
    retenu = 0;
    int n = max(strlen(n1),strlen(n2));
    char *resultat = malloc((n+1)*sizeof(char));
    for(int i = 0; i < n; i++)
    {
        printf("Entrée dans la boucle\n");
        ch1_char[0] = n1[i];
        ch2_char[0] = n2[i];
        ch1_char[1] = (char*)"/0";
        ch2_char[1] = (char*)"/0";
        printf("Ch1_char: %s, ch2_char: %s\n", ch1_char, ch2_char);
        ch1 = atoi(&ch1_char[i]);
        ch2 = atoi(&ch2_char[i]);
        printf("Dans la boucle: %d, %d\n", ch1, ch2);
        res = ch1 + ch2 + retenu;
        printf("Res: %d\n", res);
        retenu = 0;
        if(res > 9)
        {
            res = res - 10;
            retenu++;
        }
        printf("Retenu: %d\n", retenu);
        resultat[i] = res + '0';
    }
    return resultat;

}

