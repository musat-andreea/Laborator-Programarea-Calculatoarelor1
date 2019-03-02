#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100], voc[] = "aeiou";

    // strchr
    puts("Tastati sirul:"); gets(s);
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
    int n=i, m,nr=0;
    for (i=0;i<n;i++)   {
        m = strlen(v[i]);
        if (strchr(voc, v[i][0]) && strchr(voc,v[i][m]) )
        nr++;
    }

        printf ("%d \n", nr);
    return 0;
}
