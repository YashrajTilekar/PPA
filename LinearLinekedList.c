#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

void InsertFirst(struct node **Head ,int iNo)
{
    struct node *newn = NULL;
    newn = (struct node*)malloc(sizeof(struct node));

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    } 
    else
    {
        newn->next = *Head;
        *Head = newn; 
    }
}

int main()
{
    struct node *First = NULL;

    InsertFirst(&First ,101);
    InsertFirst(&First ,51);
    InsertFirst(&First ,21);

    return 0;
}
