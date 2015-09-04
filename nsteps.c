#include<stdio.h>
int main()
{
  int n,i=0,x,y;
  scanf("%d",&n);
  while(i<n)
  {
    scanf("%d %d",&x,&y);
    if((x%2 ==0) && (y%2 == 0))
    {
      if((x==y) || (y==(x-2)))
       printf("\n%d",(x+y));
      else 
      printf("\nNo Number");
       
    }
    else if((x%2 !=0) && (y%2 != 0))
    {
      if((x==y) || (y==(x-2)))
        printf("\n%d",(x+y-1));
      else
         printf("\nNo Number");
        
    }
    else
      printf("\nNo Number");
    i++;  
  }
  return 0;
}
