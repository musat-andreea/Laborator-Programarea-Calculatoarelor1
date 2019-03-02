#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int i;
    puts("Introduceti sirul de caractere:\n");
    gets(s);
    //puts(s);
    for(i=0;i<strlen(s);i++)
        {
            if(strchr("aeiou",s[i])!=NULL)
                s[i]=s[i]-32;
        }
        puts(s);
    return 0;
}
