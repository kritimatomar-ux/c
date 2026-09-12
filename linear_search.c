#include<stdio.h>
int main(){
    int a[20],n,i,key,pos,flag=0;
    printf("enter the number of elements of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the element for a[%d] :",i);
        scanf("%d",&a[i]);

    }
    printf("enter key element: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            pos=i+1;
            break;
        }
    }
    if (a[i]=key){
        printf("the key element %d is found at the position %d\n",key,pos);
    }
    else{
        printf("the key element %d is not found in the array\n",key);
    }
    return 0;

}