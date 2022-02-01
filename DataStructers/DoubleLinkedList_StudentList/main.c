#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ADT.h"
#include "P1.h"
#include "P2.h"
#include "P3.h"
#include "P4.h"
#include "P5.h"


int main()
{
    LIST* liste;
    liste=CreateList();
    while(true)
    {
        MainFrame(liste);
    }

    return 0;
}

void MainFrame(LIST* liste)
{
    printf("\nto delete the list-> 1\n");
    printf("to add a student to the list -> 2\n");
    printf("to delete a student from the list -> 3\n");
    printf("to search for a student on the list -> 4\n");
    printf("to show the list -> 5\n");
    printf("to exit in the program -> 0\n");
    Interface(liste);
}

void Interface(LIST* liste)
{
    int number;
    scanf("%d",&number);
    if(number==1)
    {
        destroyList(liste);
        MainFrame(liste);
    }
    else if(number==2)
    {
        STUDENT* temp;
        int number;
        char name[20];
        char lastname[30];
        char department[30];
        int clas;
        printf("student number:");
        scanf("%d",&number);
        printf("student name:");
        scanf("%s",name);
        printf("student lastname:");
        scanf("%s",lastname);
        printf("student department:");
        scanf("%s",department);
        printf("student class:");
        scanf("%d",&clas);
        temp=CreateNode(name,lastname,number,department,clas);
        addNode(liste,temp);
        MainFrame(liste);

    }
    else if(number==3)
    {
        int number;
        printf("student number:");
        scanf("%d",&number);
        removeNode(liste,number);
        MainFrame(liste);
    }
    else if(number==4)
    {
        int number;
        printf("student number:");
        scanf("%d",&number);
        searchList(liste,number);
        MainFrame(liste);

    }
    else if(number==5)
    {
        printf("elements of the list:\n");
        printList(liste);
        MainFrame(liste);
    }
    else if(number==0)
    {
        exit(0);
    }
    else
    {
        printf("invalid value!");
        MainFrame(liste);
    }
}

