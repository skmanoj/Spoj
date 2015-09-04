#include<stdio.h>
#include<malloc.h>
int main()
{
  long int a[]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600},ans=0;
  int n,k,*b,i;
  while((scanf("%d %d",&n,&k))==2)
  {
    b=malloc(sizeof(int)*k);
    for(i=0;i<k;i++)
      scanf("%d",&b[i]);
    ans=a[n];  
    for(i=0;i<k;i++)
    {
      ans/=a[b[i]];
    }  
    printf("\n%ld",ans);
  }
  return 0;
}
