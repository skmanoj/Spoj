n=input()
str=raw_input()
revstr=str[::-1]
splitRev=revstr.split()
listLen=len(splitRev)
for j in range (0,listLen):
	for i in range(0,n):
		print splitRev[j],
		

