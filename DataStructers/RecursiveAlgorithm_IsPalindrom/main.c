#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[20];
    printf("enter a string.\n");
    scanf("%s",string);
    int len=strlen(string);
    int c=recursive(string,0,len-1);
    if(c==0)
        printf("not polindrom");
    else
        printf("polindrom");
    return 0;
}

int recursive(char* string,int a,int length)
{
    if(string[a]==string[length])
    { a++;
      length--;
            return (recursive(string,a,length));
    }
    else if(a>length)
        return 1;
    else
        return 0;
}