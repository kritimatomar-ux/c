#include<stdio.h>
int main(){
    int a[10][10],b[10][10],sum[10][10],i,j,rows,col;
    printf("Enter the no. of rows in matrix: ");
    scanf("%d",&rows);
    printf("Enter the no. of columns in matrix: ");
    scanf("%d",&col);
    printf("Enter the first matrix: ");
    for (i=0;i<rows;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the second matrix: ");
    for (i=0;i<rows;i++){
        for (j=0;j<col;j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nFirst Matrix\n");
    for (i=0;i<rows;i++){
        for(j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix\n");
    for (i=0;i<rows;i++){
        for(j=0;j<col;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<rows;i++){
        for (j=0;j<col;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }

    }
    printf("\nAnswer\n");
    for (i=0;i<rows;i++){

        for(j=0;j<col;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");

    }
    return 0;
    }