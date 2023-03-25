#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='a';
    switch('a')
    {
        case 97:printf("97=a");break;
        case 98:printf("98=a");break;
        case 45:printf("45=a");break;//if i use a the program is error;
        case 96:printf("97=a");break;
        default:printf("this are not true.");
        break;
    }
    return 0;
}
