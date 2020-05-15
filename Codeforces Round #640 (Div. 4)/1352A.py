for _ in range(int(input())):
    a=list(input())
    ans=[]
    n=len(a)
    for i in range(0,n):
        if(a[i]!='0'):
            ans.append(a[i]+'0'*(n-i-1))
    print(len(ans))
    print(*ans)