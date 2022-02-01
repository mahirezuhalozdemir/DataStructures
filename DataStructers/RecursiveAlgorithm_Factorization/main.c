#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;
   printf("enter a number\n");
   scanf("%d",&number);
   Dividers(number,2);
    return 0;
}
void Dividers(int sayi,int a)
{
    if(sayi%a==0)
    {
        printf("%d  ",a);
        Dividers(sayi/a,a);
    }
    else
    {
        a++;
        Dividers(sayi,a);
    }
}
