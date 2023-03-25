#include<stdio.h>
#include<conio.h>
int main()
{
  int i=10,y;
  {
      y=i++;//y=++i;("%d",y)=11;("%d",i)=10;
  }
  printf("%d",i);//("%d",y)=10;
}

