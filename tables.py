lst=[]
n,k,s=[int(x) for x in raw_input().split()]			
lst=[int(x) for x in raw_input().split()]
lst.sort()
lst.reverse()
sum1=0
cnt=0
for i in range(0,len(lst)):
	sum1=sum1+lst[i]
	cnt=cnt+1
	if sum1>=k*s:
		print cnt
		break
			

