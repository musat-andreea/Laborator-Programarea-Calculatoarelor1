#include <stdio.h>
#include <stdlib.h>
/*
ANA
ARE
MERE

*/

int main()
{
   int n,i,nr_anagrama=0,nr;
   char cuv[30][35];
   printf ("Introduceti numarul de cuvinte:\n");
   scanf ("%d",&n);
   for (i=0;i<n;i++)
   {
       scanf ("%s",&cuv[i]);
   }
/*   for (i=0;i<n;i++)
    printf("%s\n",cuv[i]);
*/
    int m,m1,j,aux;
    m=strlen(cuv[0])-1;
    for (i=1;i<n;i++)
    {m1 = strlen(cuv[i])-1;
    nr=0;
        for (j=0;j<m;j++)

        if(strchr(cuv[0],cuv[i][j]))
        nr++;
        if(nr==m && m==m1)
            nr_anagrama++;
    }

    printf("%d",nr_anagrama);
   return 0;
}
