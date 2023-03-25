#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,f,i,j;
    a=5,b=6,c=4,d=5,e=6,f=6;
    i=(a=b)?(c==d):(e==f);
    j=(a==b)?(c=d):(e=f);
    printf("\ni=%d",i);
    printf("\nj=%d",j);
    return 0;
}
