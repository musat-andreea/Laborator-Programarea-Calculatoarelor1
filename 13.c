#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    char s[100];

    // strchr
    puts("Tastati sirul:");
    gets(s);
    //puts(s);
    char *p,separator[]=" ",v[11][11];
    int i=0;
    p=strtok(s,separator);
    while(p)
        {
            strcpy(v[i],p);
            i++;
            p=strtok(NULL,separator);
        }
    int j, aux,nr;
    n=i;
    for (i=0;i<n-1;i++) {
            nr = 0;
        for (j=i+1;j<n;j++)
            if(strcmp(v[i],v[j])==0)
                nr++;
        printf("Cuvantul %s apare de %d:\n",v[i],nr+1);
    }
    return 0;
}
