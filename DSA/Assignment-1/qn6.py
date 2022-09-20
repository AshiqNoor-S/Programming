l=[int(input()) for i in range (int(input()))]
n=len(l)
while(len(l)>1):
    if(n%2==0):
        for i in range(int(len(l)/2)):
            if(i!=(len(l)-1)):
                l[i]=l[i]+l[(len(l)-1)-i]
                l.pop()
    else:
        for i in range(int((len(l)+1)/2)):
            if(i!=(len(l)-1)):
                l[i]=l[i]+l[(len(l)-1)]
                l.pop()

print(l[0])
