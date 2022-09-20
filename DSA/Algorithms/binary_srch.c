#include <stdio.h>

int bin_srch(int A[],int l,int r,int loc){
    while(l<=r){
        int mid = (l+r)/2;
        if(A[mid]==loc){
            return mid;
        }else if(A[mid]>loc){
            r = mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1;
}

int main(){
    int A[] = {34,54,23,12,45,67,87,65};
    int n = sizeof(A) / sizeof(A[0]);
    int k;
    scanf("%d",&k);
    int result = bin_srch(A,0,n-1,k);
    if(result == -1){
        printf("Element is not present");
    }else{
        printf("Element is present at %d",result);
    }
}