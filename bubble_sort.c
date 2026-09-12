#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Unsorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("Sorted Array:");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}