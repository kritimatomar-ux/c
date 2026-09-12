#include<stdio.h>
int main(){
    int a[10],i,n,target,found=0,high,low,mid;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter a sorted array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the target element: ");
    scanf("%d",&target);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]==target){
            printf("element found at index %d",mid);
            found=1;
            break;
        }
        else if(a[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==0){
        printf("element not found");
    }
    return 0;
}