m=list(map(int,input().split()));
a,b=m[0],m[1]
l=[]
if(a>b):
    for i in range(1,b+1):
        if (a%i==0 and b%i==0):
            l.append(i)
elif (b>a):
    for i in range(1,a+1):
        if (a%i==0 and b%i==0):
            l.append(i)
max = 0
for i in l:
    if i>max:
        max=i
print(max)