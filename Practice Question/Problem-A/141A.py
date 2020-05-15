def verify(a,c):
    if(len(a)!=len(c)):
        return 0
    b=[0]*26
    d=[0]*26
    for i in a:
        b[ord(i)-65]+=1
    for i in c:
        d[ord(i)-65]+=1
    if(b==d):
        return 1
    else:
        return 0

a=input()
b=a+input()
c=input()
a=b
if(verify(a,c)):
    print("YES")
else:
    print("NO")
