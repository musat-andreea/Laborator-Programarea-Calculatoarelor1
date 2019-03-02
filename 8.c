#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[30], b[30];
    int i,j;
    puts("Tastati cuvintele:");
    gets(a);
    gets(b);
    //puts(a);
    //puts(b);
    if(strlen(a)==strlen(b))
        puts("sirurile au aceeasi dimensiune. Deci NU");
    if(strlen(a)>strlen(b))
    {
        if(strstr(a,b))
        puts("da");
        else puts("nu");
    }
    if(strlen(a)<strlen(b))
    {
        if(strstr(b,a))
        puts("da");
        else puts("nu");
    }
    return 0;
}
