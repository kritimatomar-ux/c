#include<stdio.h>
int main(){
    int a[10][10],b[10][10],prod[10][10],r1,r2,c1,c2;
    printf("enter the no of rows in matrix a");
    scanf("%d",&r1);
    printf("enter the no of columns matrix a");
    scanf("%d",&c1);
    printf("enter the of rows in matrix b");
    scanf("%d",&r2);
    printf("enter the no of columns in matrix b");
    scanf("%d",&c2);
    if(c1!=r2){
        printf("matrix multiplication not possible");
    }
    printf("enter the elements of the first matrix");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix");
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
        prod[i][j]=0;}
    }

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<r2;k++){
                    prod[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d",prod[i][j]);
        }
    }
    return 0;
}