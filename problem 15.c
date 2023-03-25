#include<stdio.h>
#include<conio.h>
int main()
{
    char i[]="Hello world";
    char *p;
    p=i;
    printf("\n%d%d%d%d",sizeof(i),sizeof(p),strlen(i),strlen(p));
    return 0;
}
