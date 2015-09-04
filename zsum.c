#include<stdio.h>
#define div 10000007

long long int fun(long long int x,long long int y)
{
  if(y==0)
    return 1;
  else if(y==1)
    return x%div;
  long long int res;
  if(y%2==0)
  {
    res=fun(x,y/2);
    return (res%div * res%div)%div;
  }     
  else
  {
    res=fun(x,y/2);
    return (res%div*res%div*x%div)%div;
  }
}
int main()
{ 
  long long int n,k;
  while(1)
  {
    scanf("%lld %lld",&n,&k);
    if(n==0 && k==0)
      break;
    long long int val=fun(n-1,k)%div,val1=fun(n-1,n-1)%div,val2;
    val2=(2*val)%div+(2*val1)%div+fun(n,k)%div+fun(n,n)%div;
    printf("%lld\n",val2%div); 
  }
  return 0;
}
