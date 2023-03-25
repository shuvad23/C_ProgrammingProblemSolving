#include<stdio.h>
#include<conio.h>
void display(int a);
int main()
{
    display(60);
    display(54);
    display(45);
    display(69);
    display(98);
}
void display(int a)
{
    int p;
    p++;
    printf("\np value is :%d....the value is:%d",p,a);
}

