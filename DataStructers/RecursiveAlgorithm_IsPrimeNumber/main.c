#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    int conc=PrimeNumber(number,number/2);
    if(conc)
        printf("prime number");
    else
        printf("not prime number");
    return 0;
}
int PrimeNumber(int a,int b)
{
    if(a==1)
        return 0;
    else if(b==1)
        return 1;
    else
    {
       if(a%b==0)
         return 0;
       else
         PrimeNumber(a,b-1);
    }
}
