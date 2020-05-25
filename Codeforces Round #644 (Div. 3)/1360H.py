for _ in range(int(input())):
	n,m=map(int,input().split())
	x=(2**m-n-1)//2
	l=0
	r=0
	arr=[]
	for i in range(n):
		arr.append(int(input(),2))
	arr.sort()
	for i in range(0,n):
		if(arr[i]<=x):
			x+=1
	while x in arr:
		x+=1
	y=bin(x)[2:]
	print('0'*(m-len(y))+y)
