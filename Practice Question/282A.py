ans=0
a=int(input())
for i in range(0,a):
    b=input()
    if((b[0]=="+" and b[1]=="+") or (b[2]=="+" and b[1]=="+")):
        ans+=1
    if((b[0]=="-" and b[1]=="-") or (b[2]=="-" and b[1]=="-")):
        ans-=1
print(ans)
