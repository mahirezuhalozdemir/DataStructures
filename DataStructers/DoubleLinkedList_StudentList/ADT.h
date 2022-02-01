
typedef struct node
{
    char name[10];
    char lastname[10];
    int number;
    char department[10];
    int classN;
    struct node* next;
    struct node* prev;

}STUDENT;

typedef struct
{
    STUDENT* head;
    STUDENT* rear;
    int count;
}LIST;

LIST* CreateList()
{
    LIST* liste=(LIST*)malloc(sizeof(LIST));
    if(liste)
    {
        liste->head=NULL;
        liste->rear=NULL;
        liste->count=0;
    }
    return liste;
}

STUDENT* CreateNode(char name1[],char lastname1[],int number1,char department1[],int classN1)
{
    STUDENT* student=(STUDENT*)malloc(sizeof(STUDENT));
    if(student)
    {
        strcpy(student->name,name1);
        strcpy(student->lastname,lastname1);
        student->number=number1;
        strcpy(student->department,department1);
        student->classN=classN1;
    }
}
