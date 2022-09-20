#include <stdio.h>
#include<stdlib.h>

void insertion(int A[],int n){
    int x,j;
    for(int i =1;i<n;i++){
        x = A[i];
        j = i-1;
        while(j>-1 && A[j]>x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1]=x;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
}

void main(){
    int A[]={4,7,2,5,9};
    int n = 5;
    insertion(A,n);
}