for _ in range(int(input())):
    a,b,c,d=map(int,input().split())
    if(a==c or b==d):
        print (1)
    else:
        print((c-a)*(d-b)+1)
