#include<stdio.h>
#include<string.h>

struct val
{
  char url[101];
  int times;
};

int main()
{
  struct val p[10];
  int n,i,j=1,t;
  scanf("%d",&t);
  while(j<=t)
  {
   printf("\nCase #%d:",j);
   int mx=0; 
   for(i=0;i<10;i++)
   {
     scanf("%s",p[i].url);
     scanf("%d",&n);
     p[i].times=n;
     if(n > mx)
       mx=n;
   } 
   for(i=0;i<10;i++)
   {
     if(p[i].times == mx)
       printf("\n%s",p[i].url);
   }
   j++;
  }
  return 0;
}
