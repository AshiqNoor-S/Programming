l=[0,1]
for i in range(2,int(input())):
    l.append(l[i-2]+l[i-1])
print(l)