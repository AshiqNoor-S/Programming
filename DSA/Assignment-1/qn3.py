l=[int(input()) for i in range (int(input()))]
k,flag=int(input()),0
for i in range (len(l)):
    for j in range (len(l)):
        if (l[i]+l[j]==k and flag==0):
            print("True")
            flag=1
