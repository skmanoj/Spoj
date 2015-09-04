#include<stdio.h>
#include<malloc.h>

int main()
{
  int t;
  scanf("%d",&t);
  long int n,*a,i,j,cnt=0,tmp,k;
  while(t>0)
  {
    scanf("%ld",&n);
    a=(long int *)malloc(n*sizeof(long int));
    for(i=0;i<n;i++)
      scanf("%ld",&a[i]);
    cnt=0;
      
    for(i=1;i<n;i++)
    {
      j=i;
      k=i;
      while(j>0)
      {
        if(a[k]<a[j-1])
        cnt++;
        j=j-1;
      }
    }
    
    printf("\n%ld",cnt);  
    t--;
  }
}
