#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    printf("size of i=%d",sizeof(++i));//sizeof is define the memory size of this data type ;and in this condition the increment operator is not work;
    printf("value of i=%d",i);
}
