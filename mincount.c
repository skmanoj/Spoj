#include<stdio.h>
int main()
{
  int n,i=0;
  long long int val,ans;
  scanf("%d",&n);
  while(i<n)
  {
    scanf("%lld",&val);
    ans=((val * (val+1))/2)/3;
    printf("\n%lld",ans);
    i++;
  }
 return 0; 
}
