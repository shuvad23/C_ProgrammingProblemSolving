#include<stdio.h>
#include<conio.h>
int main()
{
    int row=0,col=0,size=0,sumabove=0,sumbelow=0;
    int Matrix[5][5];
    printf("Matrix size?-SIZE:");
    scanf("%d",&size);

    printf("\nEnter Matrix element:\n");
    for(row=1;row<size+1;++row)
    {
        for(col=1;col<size+1;++col)
        {
            printf("   Element of the Matrix[%d][%d]:",row,col);
            scanf("%4d",&Matrix[row][col]);
        }
        printf("\n");
    }
    printf("The given Matrix is:\n");
    for(row=1;row<size+1;++row)
    {
        for(col=1;col<size+1;++col)
        {
            printf("%4d",Matrix[row][col]);
        }
        printf("\n");
    }
    printf("original value of this Matrix(Diagonal Element are):\n\t\t");
    for(row=1;row<size+1;++row)
    {
        for(col=1;col<size+1;++col)
        {
            if(row==col)
            printf("%4d",Matrix[row][col]);
        }
    }
    printf("\nthe above Element of this Matrix:\n\t\t");
    for(row=1;row<size+1;++row)
    {
        for(col=1;col<size+1;++col)
        {
            if(row<col)
                {
            printf("%4d",Matrix[row][col]);
            sumabove +=Matrix[row][col];
                }
        }
    }
    printf("\nthe below Element of this Matrix:\n\t\t");
    for(row=1;row<size+1;++row)
    {
        for(col=1;col<size+1;++col)
        {
            if(row>col)
                {
            printf("%4d",Matrix[row][col]);
            sumbelow +=Matrix[row][col];
                }
        }
    }
    printf("\nsum of the above diagonal elements:%d.\n sum of the below diagonal elements:%d.",sumabove,sumbelow);
    return 0;
}
