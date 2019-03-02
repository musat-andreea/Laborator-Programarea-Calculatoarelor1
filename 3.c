#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nume1[30], nume2[30];
    int v1, v2;
    printf("Introduceti numele si varsta primei persoane:\n");
    scanf("%s",&nume1);
    printf("varsta1\n");
    scanf("%d",&v1);
    printf("Introduceti numele si varsta celei de a doua persoane:\n");
    scanf("%s",&nume2);
    printf("varsta2\n");
    scanf("%d",&v2);
    if(nume1!=nume2)
    {
        if(v1>v2)
        printf("%d\n",v2);
        else if(v1<v2)
        printf("%d\n",v1);
        else if(v1==v2)
            {
            printf("%s\n",nume1);
            printf("%s",nume2);
        }
    }
    return 0;
}
