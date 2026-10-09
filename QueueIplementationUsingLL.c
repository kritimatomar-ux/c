#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *F,*R;
int dequeue()
{
    int x=-1;
    struct node *p;
    if(F==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        p=F;
        F=F->next;
        x=p->data;
        free(p);
    }
    return x;

}
void enqueue(int y)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        new->data=y;
        new->next=NULL;
        if(F==NULL)
        {
            F=R=new;
        }
        else
        {
            R->next=new;
            R=new;
        }
    }
}
void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    printf("Elements in the queue are:\n");
    struct node *p=F;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}