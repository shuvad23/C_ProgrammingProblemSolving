#include<stdio.h>
#include<conio.h>
#define are_size 5
int main()
{
    int grade[5],i,sum=0;
    float average;
    for(i=0;i<=4;i++)
    {
        printf("\n enter grade[%d]:",i+1);
        scanf("%d",&grade[i]);
        sum=sum+grade[i];
    }
    average=sum/5;
    printf("%f",average);
    return 0;
}
