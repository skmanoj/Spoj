#include<stdio.h>
int main()
{
  int n,i,ans=0;
  scanf("%d",&n);
  for(i=1;n/i-i+1>0;i++)
     ans+=n/i-i+1;	
   printf("%d",ans);  
   return 0;
}
