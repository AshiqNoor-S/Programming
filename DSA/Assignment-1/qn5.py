l,flag,m=[],0,0
for i in range (2,int(input())+1):
    k=0
    for x in range(2,i//2+1):
        if i%x==0:
            k+=1
    if(k<=0):
        l.append(i)
print(l)
for i in range(len(l)-1):
    if l[i+1]-l[i]>m:
        m=l[i+1]-l[i]
print(m)