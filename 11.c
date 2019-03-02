#include <stdio.h>
#include <stdlib.h>

int main()
{ char s[100];

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
    int n=i, m;
    for (i=0;i<n;i++)   {
        m = strlen(v[i]);
        v[i][0]=v[i][0]-32;
        v[i][m-1]=v[i][m-1]-32;
    }
        for (i=0;i<n;i++)
        printf ("%s \n",v[i]);
return 0;
}
