
bool isFound(LIST* liste, int numara)
{
    STUDENT* student;
    student=liste->head;
    if(liste->count==0)
        return false;
    else
    {
        while(student!=NULL)
        {
            if(student->number==numara)
                return true;
            else
                student=student->next;
        }
    }
    return false;

}


void addNode(LIST* liste, STUDENT* student)
{
    STUDENT* pPre;
    bool found;
    int no;
    no=student->number;
    found=isFound(liste,no);
    if(found)
        printf("\nthe student has already been added\n");
    else
    {
        if(liste->count==0)
        {
            liste->head=student;
            liste->rear=student;
            student->prev=NULL;
            student->next=NULL;
        }
        else
        {
            pPre=liste->rear;
            pPre->next=student;
            student->prev=pPre;
            liste->rear=student;
        }

    (liste->count)++;
    printf("\nadded!\n");
    }

}



