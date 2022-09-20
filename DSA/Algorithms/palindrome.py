def p(n,t):
    if (n == 0):
        return t;
    t = (t * 10) + (n % 10);
    return p(n//10,t);
 
n=int(input())
if (p(n,0) == n):
    print("Palindrome")
else:
    print("Not Palindrome")