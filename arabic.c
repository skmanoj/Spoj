#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main()
{
  int n;
  scanf("%d",&n);
  while(n--)
  {
     int cnt,i,j=-1;
     char **s;
     scanf("%d",&cnt);
     s=malloc(sizeof(char *)*cnt);
     for(i=0;i<cnt;i++)
     {
       s[i]=malloc(sizeof(char)*20);
       scanf("%s",s[i]);
       if(s[i][0] >='a' && s[i][0]<='z')
          j=i;
     }   
     if(j==-1)
     {
        printf("\n");
        for(i=0;i<cnt-1;i++)
          printf("%s ",s[i]);
        printf("%s",s[i]);  
     }  
     else
     {
       printf("\n");
       if(j+1 == cnt && j!=0)
         printf("%s ",s[j]);
       else if(j+1 == cnt && j==0)
       {
         printf("%s",s[j]);
         continue;
        } 
         
       else
       {
         for(i=j+1;i<cnt;i++)
           printf("%s ",s[i]);
         if(j!=0)  
         printf("%s ",s[j]);    
       }    
       for(i=0;i<j-1;i++)
         printf("%s ",s[i]);
       printf("%s",s[i]);  
     }
     
  }
  return 0;
}
