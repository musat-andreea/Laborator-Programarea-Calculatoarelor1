#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j;
    printf("Introduceti cuvantul:");
    scanf("%s",&s);
    for (i=0; i<strlen(s); i++)
    for (j=0; j<strlen(s); j++)
    {
        if(i!=j)
            printf("%c\n", s[j]);
    }
    return 0;
}
