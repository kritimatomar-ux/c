#include<stdio.h>
int main(){
    int a[100],n,i,newVal,pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position where you want to insert the new element: ");
    scanf("%d",&pos);
    printf("Enter the new element: ");
    scanf("%d",&newVal);
    for(i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=newVal;
    n++;
    printf("The array after insertion is: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}