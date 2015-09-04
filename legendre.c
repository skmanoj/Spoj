#include<stdio.h>

/*long long int jacobi(long long int a,long long int n)
{
      if(a==0)
      {
        if(n==1)
          return 1;
        else 
          return 0;  
      }
      if(a==2 && ((n%8==1) || (n%8 ==7)))
        return 1;
      if(a==2 && ((n%8==3) || (n%8 ==5)))
        return -1;
      if(a>=n)
       return jacobi(a%n,n);
      if(a%2==0)
        return jacobi(2,n*jacobi(a%2,n));
      if(a%4==3 && n%4==3)
        return -1*jacobi(n,a);
      return jacobi(n,a);  
}*/
/*jacobi a n
11	    | a == 0 = if n == 1 then 1 else 0
12	    | a == 2 && ( mod n 8 == 1 || mod n 8 == 7 ) = 1
13	    | a == 2 && ( mod n 8 == 3 || mod n 8 == 5 ) = -1
14	    | a >= n = jacobi ( mod a n ) n
15	    | even a = jacobi 2 n * jacobi ( div a 2 ) n
16	    | mod a 4 == 3 && mod n 4 == 3 = -jacobi n a
17	    | otherwise = jacobi n a*/
long long int jacobi(long long int a,long long int n) {
    long long int ans;

    if (a == 0)
        ans = (n == 1) ? 1 : 0;
    else if (a == 2) {
        switch ( n % 8 ) {
            case 1:
            case 7:
                    ans = 1;
                    break;
            case 3:
            case 5:
                    ans = -1;
                    break;
        }
    }
    else if ( a >= n )
        ans = jacobi(a%n, n);
    else if ( a % 2 == 0 )
        ans = jacobi(2,n)*jacobi(a/2, n);
    else
        ans = ( a % 4 == 3 && n % 4 == 3 ) ? -jacobi(n,a) : jacobi(n,a);
    return ans;
}
int main()
{
  long long int n,a,p;
  scanf("%lld",&n);
  while(n--)
  {
    scanf("%lld %lld",&a,&p);
    printf("%lld\n",jacobi(a,p));
  }
  return 0;
}


