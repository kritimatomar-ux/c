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
    int i,j,key;
    for(j=1;j<n;j++){
        key=A[j];
        i=j-1;
        while(i>=0&&A[i]>key){
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
    printf("Sorted Array:");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}