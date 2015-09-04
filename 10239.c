#include<stdio.h>
#include<malloc.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int *a,*b,m,n,i=0,min=INT_MAX,j=0;
    scanf("%d",&m);
    a=malloc(sizeof(int)*m);
    for(i=0;i<m;i++)
      scanf("%d",&a[i]);
    scanf("%d",&n);
    b=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
      scanf("%d",&b[i]);
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      {
         if(min > abs(a[i]-b[j]))
           min=abs(a[i]-b[j]); 
      }  
    printf("%d\n",min);  
  }
  return 0;
}
