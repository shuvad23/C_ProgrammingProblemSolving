#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][3]={6,4,4,4,8,7};
    int b[3][3]={6,7,4,8,6,5,9,3,5};
    int c[3][3],i,j,k,sum;

    printf("Matrix A is:\n\t\t");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\t\t");
    }
        printf("Matrix B is:\n\t\t");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\t\t");
    }
    printf("Multipulation A and B :\n\t\t");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum=0;
            for(k=0;k<=2;k++)
                sum = sum+a[i][k]*b[k][j];
                c[i][j]=sum;
                printf("%d\t",c[i][j]);
        }
          printf("\n\t\t");
    }
    return 0;
}
