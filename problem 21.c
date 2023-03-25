#include<stdio.h>
#include<conio.h>
int main()
{
    struct test//struct test are used to sum all the data type value (byte);
    {
        int x;
        char y;
        float z;
    };
    union test//union test used to the large value of data type (byte);
    {
         int x;
        char y;
        float z;
    };
}
