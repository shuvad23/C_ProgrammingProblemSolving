#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={5,1,2,20,25};
    int i,j,m;
    i=++a[2];//prefex increment;
    j=a[2]++;//posfict increment;
    m=a[i++];
    printf("the result of i=%d\nj=%d\nm=%d\n",i,j,m);
    return 0;
}
