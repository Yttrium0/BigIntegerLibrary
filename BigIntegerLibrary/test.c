#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* test(char * tableau);

int main(int argc, char* argv[])
{
    printf("test: %s\n", test(argv[1]));
    return 0;
}

char* test(char * tableau)
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