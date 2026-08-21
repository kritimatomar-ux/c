#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*new,*temp;
int main(){
    int choice;
    do{
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the element to be inserted: ");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL){
            head=new;
            temp=new;
        }
        else{
            temp->next=new;
            temp=temp->next;
        }
        printf("Do you want to continue(0,1): ");
        scanf("%d",&choice);
    }while(choice==1);
    struct node *p;
    p=head;
    printf("The elements in the linked list are: ");
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    return 0;
}