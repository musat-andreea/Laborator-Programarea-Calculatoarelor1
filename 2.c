#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20];
    int i, nr=0;
    puts("Introduceti sirul de caractere:");
    gets(s);
    for(i=0; i < strlen(s); i++)
    {
        printf("%c\n",s[i]);
        nr++;
    }
    printf("%d",nr);
    return 0;
}
