#include<stdio.h>
#include<conio.h>
int main ()
{
    int niton[5]={120,15,158,254,269};
    printf("\nBefore calling function the number of 3 is:%d",niton[2]);
    funx(niton);
        printf("\nAfter change the value:%d",niton[2]);
    return 0;
}
int funx(int grade[])
{
    int n;
    for(n=0;n<=4;n++)
        printf("\norginal value of this array:%d",grade[n]);
    printf("\n");
    grade[2]=358;

}
