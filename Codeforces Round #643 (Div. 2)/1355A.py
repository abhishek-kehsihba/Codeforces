a=int(input())
for _ in range(0,a):
    x,y=map(int,input().split())
    if(y==1):
        print(x)
    else:
        ans=[]
        ans.append(x)
        check=False;
        for i in range(2,y+1):
            b=ans[-1]
            b=str(b)
            b=[int(i) for i in b]
            res=ans[-1]+min(b)*max(b)
            if(res==ans[-1]):
                check=True
                break;
            else:
                ans.append(res)
        print(ans[-1])