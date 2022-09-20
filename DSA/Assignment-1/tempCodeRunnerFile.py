l=[]
for i in range(int(input())):
    m=[]
    x,max=input(),0
    for i in range(len(x)):
        for j in range(i,len(x)):
               m.append(x[i:j])
    l.append(set(m))

tmp = l[0]
for i in l:
    tmp=tmp.intersection(i)

for i in tmp:
    if (len(i)>max):
        c=i
print(i)
