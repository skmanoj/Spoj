#include<stdio.h>
#include<string.h>

int main()
{
  char s[81];
  int n,t,i,j=0,len;
  scanf("%d",&t);
  while(j<t)
  {
    scanf("%d %s",&n,s);
    len=strlen(s);
    printf("\n%d ",j+1);
    for(i=0;i<len;i++)
    {
      if(i==n-1)
       continue;
      printf("%c",s[i]); 
    }
    j++;
  }
  return 0;
}
