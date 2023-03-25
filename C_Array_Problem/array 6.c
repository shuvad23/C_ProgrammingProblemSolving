#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2]={4,3,2,1};
    int b[2][2]={1,2,2,3};
    int c[2][2],i,j,k,sum;
    printf("Matrix A is:\n\t\t");
    for(i=0;i<2;i++)//outer for loop
    {
        for(j=0;j<2;j++)//inner for loop
            printf("%d\t",a[i][j]);
        printf("\n\t\t");
    }
    printf("Matrix B is:\n\t\t");
    for(i=0;i<2;i++)//outer for loop
    {
        for(j=0;j<2;j++)//inner for loop
            printf("%d\t",b[i][j]);
        printf("\n\t\t");
    }
    printf("Multiplication A and B is:\n\t\t");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
                sum +=a[i][k] * b[k][j];
                c[i][j]=sum;
                printf("%d\t",c[i][j]);
        }
              printf("\n\t\t");
    }
    return 0;
}
