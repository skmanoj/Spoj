#include<stdio.h>

int main()
{
  long long int t,i,a[30],b[30],n;
  scanf("%lld",&t);
  a[0]=3;
  b[0]=0;
  a[1]=3;
  b[1]=6;
  for(i=2;i<30;i++)
  {
    a[i]=a[i-1]+b[i-1];
    b[i]=2*a[i-1]+b[i-1];
  }
  while(t--)
  {
    scanf("%lld",&n);
    printf("%lld\n",a[n-1]+b[n-1]);
  } 
  return 0;
}
