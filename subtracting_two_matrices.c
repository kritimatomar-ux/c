#include<stdio.h>
int main(){
    int a[10][10],b[10][10],diff[10][10],i,j,rows,col;
    printf("enter the no. of rows in matrix ");
    scanf("%d",&rows);
    printf("enter the no. of columns in matrix ");
    scanf("%d",&col);
    for (i=0;i<rows;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<rows;i++){
        for (j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<rows;i++){
        for (j=0;j<col;j++){
            diff[i][j]=a[i][j]-b[i][j];
        }

    }
    for (i=0;i<rows;i++){

        for(j=0;j<col;j++){
            printf("%d",diff[i][j]);
        }
    }
    return 0;
    }
