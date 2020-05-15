a=[2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43 , 47]
m,n=map(int,input().split())
if(m==47):
    print("NO")
else:
    b=a.index(m)
    if(a[b+1]==n):
        print("YES")
    else:
        print("NO")
