#include<stdio.h>
#define size 5
int Q[size];
int F=-1, R=-1;
 void enqueue(int x)
{
    if(R==size-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        R=R+1;
        Q[R]=x;
    }
    if(F==-1)
    {
        F=0;
    }
}
    int dequeue()
    {
        if(F==-1 && R==-1)
        {
            printf("Queue is empty\n");
        }
        else
        {
            printf("Deleted element is %d\n",Q[F]);
            F=F+1;
        }
    }
    void main()
    {
        enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(50);
        dequeue();
        dequeue();
        enqueue(25);
        printf("Elements in the queue are:\n");
        for(int i=F;i<=R;i++)
        {
            printf("%d\n",Q[i]);
        }
    }

