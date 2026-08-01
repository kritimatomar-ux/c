#include <stdio.h>
int main(){
    int a[10][10],b[10][10],prod[10][10],r1,c1,r2,c2;
    printf("Enter the no rows in first matrix: ");
    scanf("%d",&r1);
    printf("Enter the no of columns in first matrix: ");
    scanf("%d",&c1);
    printf("Enter the no rows in second matrix: ");
    scanf("%d",&r2);
    printf("Enter the no of columns in second matrix: ");
    scanf("%d",&c2);
    if (c1!=r2){
        printf("Matrix multiplication not possible");
        return 0;

    }
    printf("Enter the first array: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second array: \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nFirst matrix: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    for (int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            prod[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for (int k=0;k<r2;k++){
                prod[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nProduct matrix\n");
    for (int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }
    return 0;

}
  