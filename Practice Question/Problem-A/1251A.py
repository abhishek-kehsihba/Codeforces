for _ in range(int(input())):
    a=input()
    ans=[]
    n=len(a)
    b=[0]*n
    if(n==1):
        print(a)
        continue
    for i in range(0,n):
        if(not b[i] and i!=(n-1)):
            if(a[i]!=a[i+1]):
                ans.append(a[i])
            else:
                b[i+1]=1
        
        elif(i==(n-1) and not b[i]):
            ans.append(a[i])
    ans=set(ans)
    ans=list(ans) 
    ans.sort()
    print(''.join(ans))
