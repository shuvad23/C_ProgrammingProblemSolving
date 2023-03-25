#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int address;
    printf("\nenter the value of i:");
    scanf("%d",&i);
    address=1001+(i*2);
    printf("\naddress of element[%d]:%d",i,address);
       float j;
      float address1;
    printf("\nenter the value of j:");
    scanf("%f",&j);
    address1=2001+(j*4);
    printf("\naddress of element[%f]:%f",j,address1);
    return 0;
}
