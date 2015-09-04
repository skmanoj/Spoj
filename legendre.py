#jacobi a n
#11	    | a == 0 = if n == 1 then 1 else 0
#12	    | a == 2 && ( mod n 8 == 1 || mod n 8 == 7 ) = 1
#13	    | a == 2 && ( mod n 8 == 3 || mod n 8 == 5 ) = -1
#14	    | a >= n = jacobi ( mod a n ) n
#15	    | even a = jacobi 2 n * jacobi ( div a 2 ) n
#16	    | mod a 4 == 3 && mod n 4 == 3 = -jacobi n a
#17	    | otherwise = jacobi n a*/
def jacobi(a,n):
	if a==0:
		if n==1:
			return 1
		return 0
	if a==2 and (n%8==1 or n%8==7):
		return 1		
	if a==2 and (n%8==3 or n%8==5):
		return -1			
	if a>=n:
		return jacobi(a%n,n)
	if (a%2==0):
		return jacobi(2,n*jacobi(a/2,n))
	if (a%4 ==3 and n%4==3):
		return -1*jacobi(n,a)
	return jacobi(n,a)
n=int(raw_input())
for i in range(0,n):
	a,p=[int(x) for x in raw_input().split()]			
	print jacobi(a,p)				
