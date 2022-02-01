void printList(LIST* liste)
{
    STUDENT* student;
    student=liste->head;
    if(liste->count==0)
        printf("\nthere is nothing on the list\n");
    else
    {
        printf("STUDENT LIST: \n");
        while(student!=NULL)
        {
            printf("NAME:%s  LASTNAME:%s  NUMBER:%d  MAJOR:%s  CLASS:%d\n",student->name,student->lastname,student->number,student->department,student->classN);
            student=student->next;
        }
    }

}

