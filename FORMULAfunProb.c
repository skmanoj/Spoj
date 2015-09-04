#include<stdio.h>
int main()
{
  int ten,five;
  while((scanf("%d %d",&ten,&five)==2) && (ten!=0 || five!=0))
  {
     double sol;
    if(ten>five)
     {
        sol=0.0;
        printf("%.6f\n",sol);
        continue; 
     }
     sol=(double)(five-ten+1)/(double)(five+1);
     printf("%.6f\n",sol);
  }
  return 0;
}