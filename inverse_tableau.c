#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverseTableau(char *tableau);

int main(int argc, char* argv[])
{
    printf("Paramètre entrée %s(avant fonction)\n", argv[1]);
    printf("résultat %s\n", inverseTableau(argv[1]));
    return 0;
}

char* inverseTableau(char *tableau)
{
    printf("Dans la fonction: %s\n", tableau);
    char *nvTableau;
    int n = strlen(tableau);
    nvTableau = malloc((n-1) * sizeof(char));
    
    for(int i = 0; i<n; i++)
    {
        nvTableau[i] = tableau[n-i-1];
    }

    return nvTableau;
}