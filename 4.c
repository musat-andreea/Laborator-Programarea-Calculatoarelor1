#include <stdio.h>
#include <stdlib.h>

void concatenare (char rez[], char sir1[], int n1, char sir2[], int n2, char sir3[], int n3)
{
    int i;
    for(i=0;i<n1;i++)
        rez[i]=sir1[i];
    for(i=0;i<n2;i++)
        rez[n1+i]=sir2[i];
    for(i=0;i<n3;i++)
        rez[n1+n2+i]=sir3[i];


}
int main()
{char s1[3]={'S', 'a', 'l'};
char s2[8]={'p', 'r', 'i', 'n', 't', 'e', 's', 'a'};
char s3[4]={'b', 'u', 'n', 'a'};
char s4[20];
int i,n,n1=3,n2=8,n3=4;
n=n1+n2+n3;
concatenare(s4,s1,n1,s2,n2,s3,n3);
for(i=0;i<n;i++)
    printf("%c",s4[i]);
printf("\n");
return 0;
}
