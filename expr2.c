#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   int t,a,b,i;
   char s[8],op,val[3];
   scanf("%d",&t);
   while(t-->0)
   {
     scanf("%s",s);
     for(i=0;i<strlen(s);i++)
     {
       if(s[i]=='+' || s[i]=='-' || s[i]=='*')
        {
           op=s[i];
           break;        
        }
        val[i]=s[i];
     }
     val[i]='\0';
     a=atoi(val);
     b=atoi(s+i+1);
     if(op=='+')
       printf("\n%d",a+b);
     else if(op=='-')
       printf("\n%d",a-b);
     else if(op=='*')
       printf("\n%d",a*b);
   }
   return 0;
}
