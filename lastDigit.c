#include<stdio.h>
int f(long long int a, long long int b)
 {
    if(b==0)return 1;
    int da = a % 10;
    if(da==0)return 0;
    if(da==5)return 5;
    switch(b%4){
    case 0:
      return da%2!=0?1:6;
    case 1:
      return da;
    case 2:
      return da*da%10;
    default:
      return da*da*da%10;
    }
 }
 int main()
{
  int t;
  long long int a,b;
  scanf("%d",&t);
  while(t>0)
  {
    scanf("%lld %lld",&a,&b);
    printf("\n%d",f(a,b));
    t--;
  }
  return 0;
}    
