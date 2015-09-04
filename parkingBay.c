#include<stdio.h>

int find(int a,int b,int mod)
{
  int p=a%mod;
  int result=1;
  while(b)
  {
    if(b%2)
    {
      result=result*p %mod;
    }
    if(b/=2)
      p=(p*p)%mod;
  }
  return result;
}

int main()
{
  int t,n;
  scanf("%d",&t);
  while(t--)
  {
     scanf("%d",&n);
     printf("%d\n",find(n+1,n-1,10007));
  }
  return 0;
}