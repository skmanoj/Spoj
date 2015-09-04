#include<stdio.h>
#include<malloc.h>

int main()
{
  int *a,t,n,i;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    if(n==0)
    {
      printf("\nNO");
      continue;
    }
    
    a=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    int cnt=1,maj=a[0];
    
    for(i=1;i<n;i++)
    {
      if(a[i]==maj)
        cnt++;
      else
        cnt--;
        
      if(cnt==0)
      {
        if(i+1 < n)
          maj=a[i+1];    
        else
           break;
       }    
    }
    
    if(cnt==0)
    {
       printf("\nNO"); 
       continue;
    }
    
    cnt=0;
    for(i=0;i<n;i++)
    {
      if(a[i]==maj)
        cnt++;
    }
    
    if(cnt > n/2)
     printf("\nYES %d",maj);
    else
      printf("\nNO"); 
          
  }
  return 0;
}
