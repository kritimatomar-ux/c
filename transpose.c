#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    int A[m][n];
    int B[n][m];
    printf("Enter the elements of the array:");
    for(int i=0;i<m;i++ ){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("The array is:\n");
    for(int i=0;i<m;i++ ){
        for(int j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
            B[i][j]=A[j][i];
        }
    }
    printf("Transpose of the array is: \n");
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
return 0;
}