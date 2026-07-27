#include<stdio.h>
int main(){
    int a[100],i,n,pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }   
    printf("Enter the position of the element to be deleted: ");
    scanf("%d",&pos);   
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    printf("Array after deletion: ");
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    return 0;
}