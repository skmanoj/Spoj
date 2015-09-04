#include<stdio.h>
int main()
{
   int n,m;
   while(1)
   {
   scanf("%de%d",&n,&m);
   if(n==0 && m==0)
     break;
   while(m--)
     n*=10;
   int t;
   for(t=1;2*t<=n;t*=2);
   printf("%d\n",2*(n-t)+1);
    } 
   return 0;
}