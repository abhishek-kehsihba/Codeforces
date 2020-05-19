a=[2**i for i in range(0,20)]
s=input()
b=int(s,2)
ans=-1
for i in range(0,20):
    if(b%a[i]==0):
        ans=max(ans,i)
print(ans)