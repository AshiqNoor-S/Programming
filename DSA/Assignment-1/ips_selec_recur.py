def selection(l,i,n):
    min = l[i]
    k=i
    for j in range(i+1, n):
        if l[j] < min:
            min = l[j] 
            k = j           
    l[i],l[k]=l[k],l[i]
    if i+1 < n:
        selection(l,i+1,n)
 
l = [int(input()) for i in range(int(input()))]
selection(l,0,len(l))
for i in l:
    print(i,end="\n")