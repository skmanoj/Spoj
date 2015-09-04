#include<stdio.h>
int main()
{
  long int n,i=0;
  long long int val,ans=0;
  scanf("%ld",&n);
  while(i<n)
  {
    scanf("%lld",&val);
    ans=ans^val;
    i++;
  }
  printf("%lld",ans);
  return 0;
}
