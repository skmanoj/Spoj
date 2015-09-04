#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
 int cases,a[5],c[5],i=0,j;
 float kg,pds,kgs,pd,lt,gls,lts,gl,n;
 scanf("%d",&cases);
 while(cases--){
  scanf("%s %s",a,c);
  i++;
  n=atof(a);
  printf("%d ",i);
  if(!strcmp(c,"kg"))
   printf("%.4f lb\n",(n*2.2046));
  else if(!strcmp(c,"lb"))
   printf("%.4f kg\n",(n*0.4536));

  else if(!strcmp(c,"l"))
   printf("%.4f g\n",(n*0.2642));
  else if(!strcmp(c,"g"))
   printf("%.4f l\n",(n*3.7854));

  }

return 0;
}

