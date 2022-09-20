#include <stdio.h>

int bin_srch(int A[],int l, int r, int k){
    if(r>=l){
        int mid=(l+r)/2;
        if (A[mid]==k){
            return mid;   
        }if(A[mid]>k){
            return bin_srch(A,l,mid-1,k);
        }
        return bin_srch(A,mid+1,r,k);
    }
    return -1;
}

void main(){
    int A[]={2, 3, 4, 10, 40 };
    int n = sizeof(A)/sizeof(A[0]);
    int k;
    scanf("%d",&k);
    int r = bin_srch(A,0,n-1,k);
    if(r==-1){
        printf("Element not found");
    }else{
        printf("Element found at %d",r);
    }
}