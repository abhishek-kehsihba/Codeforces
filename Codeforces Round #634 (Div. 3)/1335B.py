w="abcdefghijklmnopqrstuvwxyz"
for _ in range(int(input())):
    n,a,b=map(int,input().split())
    ans=w[0:b]
    i=0
    for j in range(0,n):
        print(w[i%b],end="")
        i+=1
    print()