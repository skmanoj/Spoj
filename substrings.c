#include<stdio.h>
#include<string.h>
#include<malloc.h>

int * failure(char p[],int n)
{
  int *f=malloc(sizeof(int)*n);
  f[0]=0;
  int i=1,j=0;
  while(i<n)
  {
    if(p[i]==p[j])
    {
      f[i]=j+1;
      ++i;
      ++j;       
    }
    else
    {
      if(j==0)
      {
        f[i]=0;
        ++i;
      }
      else
       j=f[j-1];
    }
  }
  return f;
}
int main()
{
  char p[10];
  int *a,i;
  scanf("%s",p);
  a=malloc(sizeof(int) * strlen(p));
  a=failure(p,strlen(p));
  for(i=0;i<strlen(p);i++)
   printf("%d",a[i]);
  return 0;
}
