#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100],v[100];
    int i, j, p, q, aux;
    puts("Introduceti sirul de caractere:\n");
    gets(s);

        printf("introduceti prima pozitie:");
        scanf("%d",&p);
        printf("introduceti a doua valoare:");
        scanf("%d",&q);
      if(p>q)
        {
            aux=p;
            p=q;
            q=aux;
        }
        for(j=p; j<=q; j++)
            {
                printf("%c",s[j]);
            }





    //prima liniuta
/*   for(i=0;i<strlen(s);i++)
        {
            if(strchr("aeiou",s[i])!=NULL)
               for(j=i;j<strlen(s);j++)
                s[j]=s[j+1];

        }
        printf("%s",s);*/
   return 0;
}
