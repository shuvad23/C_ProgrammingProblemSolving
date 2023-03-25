#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 4
int main()
{
    int row,col;
    float array[ROW][COL]={{1,2,3,45},{4,5,6,46},{7,8,9,25}};
    for(row=0;row<ROW;row++)
    {
        for(col=0;col<COL;col++)
        {
            printf("\n Element[%d][%d]:%.2f",row,col,array[row][col]);
        }
    }
    return 0;
}
