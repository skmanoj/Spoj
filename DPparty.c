//simple DP 

#include<stdio.h>
int main()
{
   int budget,n;
   int price,fun;
   int maxfun[512];
   while((scanf("%d %d",&budget,&n)==2) && budget!=0 && n!=0)
   {
      maxfun[0]=0;
      int i;
      for(i=1;i<=budget;i++)
         maxfun[i]=-1; 
      while(n--)
      {
         scanf("%d %d",&price,&fun);
         for(i=budget;i>=price;i--)
         {
            if(maxfun[i-price]<0)
            	continue;
            if(maxfun[i-price]+fun < maxfun[i])
            	continue;
            maxfun[i]=maxfun[i-price]+fun;		
         }
         
      }
         int solMoney=0,solFun=0;
      
         for(i=budget;i>0;i--)
         {
            if(maxfun[i]>=solFun)
            {
            	solFun=maxfun[i];
            	solMoney=i;
            }	
         }
         
         printf("%d %d\n",solMoney,solFun);
         
      
   }
   return 0;
}