#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *new, *temp;
int main()
{
    int ch;
    do
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter the element to be inserted: ");
        scanf("%d", &new->data);
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            temp = new;
        }
        else
        {

            temp->next = new;
            temp = temp->next;
        }
        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &ch);
    } while (ch == 1);
    new = (struct node *)malloc(sizeof(struct node));
    printf("enter the element to be inserted at the last: ");
    scanf("%d", &new->data);
    
    struct node*p;
    p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next = new;
    new->next = NULL;
    struct node *a;
    a = head;
    printf("The elements in the linked list are: ");
    while (a != NULL)
    {
        printf("%d ", a->data);
        a = a->next;
    }
    return 0;
}