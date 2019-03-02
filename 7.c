#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        char s[100];
        int i;
        puts("Tastati sirul de caractere:");
        gets(s);
        //puts(s);
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]==' ')
                s[i]=31;
            if(s[i]=='z')
                {s[i]='a';
                 printf("%c",s[i]);
                }

            else printf("%c",s[i]+1);
        }
    return 0;
}
