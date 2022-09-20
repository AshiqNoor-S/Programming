l=[int(input()) for i in range (int(input()))]
max,min=0,l[0]
for i in l:
    if (i>max):
        max=i
for i in l:
    if (min>i):
        min=i
print(max-min)