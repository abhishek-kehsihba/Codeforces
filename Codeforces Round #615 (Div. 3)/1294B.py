for _ in range(int(input())):
    a=int(input())
    b=[]
    bool=0
    pu,pr=0,0
    c=[]
    for i in range(0,a):
        r,u=map(int,input().split())
        c.append([r,u])
    c=sorted(c,key=lambda x: (x[0],x[1]))
    for i in range(0,a):
        r,u=c[i][0],c[i][1]
        if(bool==1):
            continue
        if(i==0):
            b+=['R']*r+['U']*u
            pu=u
            pr=r
        elif(u-pu>=0 and r-pr>=0 and i!=0):
            b+=['R']*(r-pr)+['U']*(u-pu)
            pu=u
            pr=r
        else:
            bool=1
    if(bool==1):
        print("NO")
    else:
        print("YES")
        print(''.join(b))