
void searchList(LIST* liste, int numara)
{
    STUDENT* student;
    STUDENT* temp;
    temp=NULL;
    student=(LIST*)malloc(sizeof(LIST));
    student=liste->head;
    if(liste->count==0)
        printf("\nthe list is empty\n");
    else
    {
        while(student!=NULL)
        {
            if(student->number==numara)
            {
                temp=student;
                break;
            }
            else
                student=student->next;
        }
        if(temp!=NULL)
        {
            printf("\nthe student:NAME:%s  LASTNAME:%s  NUMBER:%d  DEPARTMENT:%s  CLASS:%d\n",student->name,student->lastname,
               student->number,student->department,student->classN);
        }
        else
            printf("\nthe student is not on the list!\n");


    }

}
