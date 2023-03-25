#include<stdio.h>
#include<conio.h>
void function(int a,char x);
int main()
{
    function("ARIF",65);
    function("EMON",66);
    function("HRIDOY",67);
    function("JOY",68);
    function("SHAKIB",69);
}
void function(int a,char b)
{
    static int p;//static  start number is 0;if i not use of static they show a garbach value;
    p++;
    char  r;
    r=b;
    printf("\np value is :%d...code of this p value is:%d..the result value is:%s",p,r,a);
}
