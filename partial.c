#include<stdio.h>
#include<string.h>
 
int main()
{
   int n,ch[26];
   char text[11],c;
   scanf("%d",&n);
   scanf("%s",text);
   printf("%s",text);
   int i=0,val;
   for(i=0;i<26;i++)
    ch[i]=0;
   for(i=0;i<2*n;i++)
   {
     scanf("%c %d",&c,&val);
     ch[c-'a']=val;
   }
   int len=strlen(text);
   int sum=1;
   for(i=0;i<len;i++)
   {
     if(ch[text[i]-'a'] !=0)
     sum*=ch[text[i]-'a'];
   }
   printf("%d",sum);
   return 0;
}
