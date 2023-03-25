#include<stdio.h>
#include<conio.h>
int main()
{
    static int i;//i=0;
    int j;
    for(j=0;j<10;j++)
    {
        i+=2;
        i-=j;
        printf("%d\n",i);
    }
}
