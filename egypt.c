#include<stdio.h>
#include<math.h>

void egypt(long long int p,long long int q,long long int r)
{
  if(p<r && q<r)
  {
  if(r== sqrt(pow(p,2) + pow(q,2)))
   printf("\nright");
 else
   printf("\nwrong");  
   }
   else if (p<q && r<q)
   {
  if(q== sqrt(pow(p,2) + pow(r,2)))
   printf("\nright");
 else
   printf("\nwrong");  
   
   }
   else if(q<p && r<p)
   {
  if(p== sqrt(pow(q,2) + pow(r,2)))
   printf("\nright");
 else
   printf("\nwrong");  
   
   }
}

int main()
{
  long long int p,q,r;
  while(1)
  {
    scanf("%lld %lld %lld",&p,&q,&r);
    if(p==0 && q==0 && r==0)
      break;
    egypt(p,q,r);        
  }
  return 0;
}
