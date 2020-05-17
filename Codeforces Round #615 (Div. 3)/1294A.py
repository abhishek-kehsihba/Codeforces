for _ in range(int(input())):
    a,b,c,n=map(int,input().split())
    s=(a+b+c+n)
    if(s%3==0):
        if(s//3>=a and s//3>=b and s//3>=c):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")