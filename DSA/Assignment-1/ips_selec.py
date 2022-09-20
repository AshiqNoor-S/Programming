def selection(A,n):
    for i in range(0,n-1,2):
        min=A[i];
        # k = i
        for j in range(i,n-1,2):
            if(A[j]<=min):
                min=A[j]
                k=j;
        if(k!=i):
            A[i],A[k]=A[k],A[i]
            A[i+1],A[k+1]=A[k+1],A[i+1]
            

n=int(input())
A=[0]*(2*n)
for i in range(2*n):
    if(i%2==0):
        A[i]=int(input())
    else:
        A[i]=input()
selection(A,n*2)
for i in range(2*n):
    print(A[i],end='\n')