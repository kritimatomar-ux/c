#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head,*temp,*new,*a;
int main(){
    int ch;
    do{
        new=malloc(sizeof(struct node));
        new->prev =NULL;
        printf("Enter the data:");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL){
            head=temp=new;
        }
        else{
            temp->next=new;
            new->prev=temp;
            temp=temp->next;

        }
        printf("Do you want to add node: ");
        scanf("%d",&ch);


    }
    while(ch==1);
    a=head;
    printf("The elements in the linked list are:");
    while(a!=NULL){
        printf("%d ",a->data);
        a=a->next;
    }
    printf("\n");
    struct node *p;
    p=head;
    while(p->data!=25){
        p=p->next;
    }
    p->prev->next=p->next;
    p->next->prev=p->prev;
    free(p);
    a=head;
    printf("The elements in the linked list after deletion are:");
    while(a!=NULL){
        printf("%d ",a->data);
        a=a->next;
    }
    return 0;




}