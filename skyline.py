#Its more of a mathematical question than a coding question. The number of ways in which we can arrange n numbers such that 
#there is no increasing subsequence of length 3 is the n'th Catalan number. Refer to wikipedia.
#After that it is pretty easy. Howecer the following iterative formula that i have used here to implement in python will give WA in C, 
#because of overflow. In implementing in C, use the addition formula to generate the n'th catalan number from the previous n-1.

The Code:

ar = []
ar.append(1)
for i in range(1, 10002):
	ar.append(ar[i-1]*(4*i-2)/(i+1))
n = int(raw_input())
while(n>0):
	print ar[n]%1000000
	n = int(raw_input())
