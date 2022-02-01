#include <stdio.h>
#include <stdlib.h>
#include "P1.h"
int main()
{

    NODE* head;
    int x;
    int n;
    printf("enter a n value:\n");
    scanf("%d",&n);
	for(int i=1;i<=n;i++) {
        printf("enter a x value:");
        scanf("%d",&x);
		createList(head,x);
	}
	printf("%d",FindLength(head)-1);


    return 0;
}
int FindLength(NODE* head)
{
    if(head==NULL)
        return 0;
    else
    {
            return (1+FindLength(head->link));
    }
}
