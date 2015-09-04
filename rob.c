#include<stdio.h>
int main()
{
  int cases,i,j,n,k;
  int a[200];
  scanf("%d",&cases);
  while(cases--)
  {
    for(i=0;i<200;i++)
      a[i]=0;
    scanf("%d %d",&n,&k);
    a[0]=1;
    i=0;
    j=1;
    n--;
    while(1)
    {
      a[j]+=a[i]+1;
      n=n-(a[i]+1);
      if(n==0)
        break;
      if(n<0)
      {
        int tmp;
        tmp=0-n;
        a[j]-=tmp;
        break;
      }  
      i++,j++;
      i=i%k;
      j=j%k;
    }  
   for(i=0;i<k;i++)
     printf("%d ",a[i]); 
   printf("\n");  
  }
}
