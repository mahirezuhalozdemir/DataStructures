
void removeNode(LIST* liste,int numara)
{
    bool found;
    found=isFound(liste,numara);
    if(found)
    {
        del_ete(liste,numara);
        printf("\ndeleted!\n");
    }
    else
    {
        printf("\nthe student is not on the list\n");
    }

}

void del_ete(LIST* liste,int numara)
{
    STUDENT*pPre;
    STUDENT* pNext;
    STUDENT* temp;
    temp=liste->head;
    while(temp->number!=numara)
    {
        temp=temp->next;
    }

    pPre=temp->prev;
    pNext=temp->next;

    if(pPre==NULL)
    {
        liste->head=pNext;
        pNext->prev=NULL;
    }
    else
    {
        if(pNext==NULL)
        {
            liste->rear=pPre;
            pPre->next=NULL;
        }
        else
        {
            pPre->next=pNext;
            pNext->prev=pPre;
        }

    }
    free(temp);
    (liste->count)--;
    printf("\nthe student is deleted\n");

}
