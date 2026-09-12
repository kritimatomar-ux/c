#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the number of elements in first array: ");
    scanf("%d",&n);
    printf("Enter the number of elements in second array: ");
    scanf("%d",&m);
    int A[n],B[m];
    printf("Enter the sorted elements of first array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter the sorted elements of second array: ");
    for(int j=0;j<m;j++){
        scanf("%d",&B[j]);
    }
    printf("First array: ");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("Second array: ");
    for(int j=0;j<n;j++){
        printf("%d ",B[j]);
    }
    printf("\n");

    int i=0,j=0,k=0;
    int C[n+m];
    while(i<n&&j<m){
        if (A[i]<=B[j]){
            C[k]=A[i];
            k++;
            i++;
        }
        else{
            C[k]=B[j];
            k++;
            j++;        }
    }
    while(i<n){
        C[k]=A[i];
        k++;
        i++;
    }
    while(j<m){
        C[k]=B[j];
        k++;
        j++;
    }
    printf("Merged Array: ");
    for(int i=0;i<m+n;i++){
        printf("%d ",C[i]);
    }
    return 0;

}