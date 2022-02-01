typedef struct Node
{
    int data;
    struct Node* link;

}NODE;

NODE* createList(NODE* head,int x)
{
    NODE* temp=NULL;
    NODE* node = (NODE*) malloc(sizeof(NODE));
    node->data  = x;
    node->link=NULL;
    temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=node;
     return head;

}