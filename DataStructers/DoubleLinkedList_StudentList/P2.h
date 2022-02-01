void destroyList(LIST* liste)
 {
     if(liste->count==0)
        printf("\nthe list is empty:\n");

     else
     {
         STUDENT* temp;
         while(liste->count>0)
         {
            temp=liste->head;
            liste->head=liste->head->next;
            free(temp);
            (liste->count)--;
         }
         printf("\nthe list deleted\n");

     }
     free(liste);
 }

