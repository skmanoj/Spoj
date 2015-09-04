#include<stdio.h>
//pq db
int isMirroredPair(char a,char b)
{
  if(a=='p' && b=='q')
    return 1;
  else if(a=='q' && b=='p')
    return 1;
  else if(a=='d' && b=='b')
    return 1;
  else if(a=='b' && b=='d')
    return 1;
  return 0;      
}

int main()
{
  printf("\nReady");
  char p[3];
     int ans;
  while(1)
  {
   ans=0; 
//   scanf("%s",p);
   gets(p);
   if(p[0]==' ' && p[1]==' ')
   break;
   ans=isMirroredPair(p[0],p[1]);
   if(ans==1)
     printf("\nMirrored pair");
   else if(ans==0)
     printf("\nOrdinary pair");
  }    
  return 0;
}
