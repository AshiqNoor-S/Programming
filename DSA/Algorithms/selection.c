#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void selection(int A[],int n){
    int min,k;
    for(int i=0;i<n-1;i++){
        min = A[i];
        for(int j=i;j<n;j++){
            if(A[j]<min){
                min = A[j];
                k = j;
            }
        }
        if(i!=k){
            swap(&A[i],&A[k]);
        } 
    }
}

int main(){
    int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
    selection(A,n);
    for(i=0;i<10;i++)
    printf("%d ",A[i]);
}