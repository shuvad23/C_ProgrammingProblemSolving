#include<stdio.h>
#include<conio.h>
int ban_as(int x)
{
     int var;
    var=(x+12);
    return var;
}
int main()
{
   int a;
   int math;
    printf("enter the value of a:");
   scanf("%d",&a);
   math=ban_as(a);
   printf("%d",math);
   return 0;
}
