#include<stdio.h>
#include<malloc.h>
int main()
{
  int t,n,m,d,*a;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d %d %d",&n,&m,&d);
    a=malloc(sizeof(int)*n);
    int i,j=0;
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;)
    {
      if(a[i]<=d)
      {
        i++;
        continue;
      }
      else
      {
        while(1)
        {
          a[i]=a[i]-d;
          j++;
          if(a[i]<=d || j==m)
            break;
        }
        i++;
        if(j==m)
          break;
      }
    }
    if(j!=m)
      printf("NO\n");
    else
       printf("YES\n");    
  }
  return 0;
}
