def f1(seq):
	set = {}
	map(set.__setitem__, seq, [])
	return set.keys()

t=int(raw_input())
friends=[]
lst=[]
for i in range(0,t):
	tmp=[]
	tmp=[int(x) for x in raw_input().split()]
	friends.append(tmp[0])
	for j in range(2,len(tmp)):
		lst.append(tmp[j])
lst=f1(lst)
cnt=0
for i in range(0,len(lst)):
	if lst[i] not in friends:
		cnt=cnt+1
print cnt
