#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* test(char * tableau);

int main(int argc, char* argv[])
{
    char depart[3] = "TRE";
    char arrive[1];
    sprintf(arrive, "%c", depart[2]);
    printf("%s\n", arrive);
    return 0;
}