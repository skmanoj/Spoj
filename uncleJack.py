while 1:
	a,b=[int(x) for x in raw_input().split()]
	if a==0 and b==0:
		exit(0)
	print a**b
