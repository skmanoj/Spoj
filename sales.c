#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct sort
{
  char *name;
  int age;
  struct sort *next;
}*head;

struct sort * init()
{
  struct sort *tmp;
  tmp=malloc(sizeof(struct sort *));
  tmp->age=-1;
  tmp->name="start";
  return tmp;  
}

void insert(struct sort *root,char *val,int n)
{
   struct sort *tmp,*tmp1;
   while((tmp->next) && tmp->next->age<n)//2345 6
   {
     tmp=tmp->next;
   }    
   while((tmp->next) && (strcmp(val,tmp->next->name)==1) && tmp->next->age==n)
   {
     tmp=tmp->next;
   } 
   tmp1=malloc(sizeof(struct sort *));
//   tmp1->name=(char *)malloc(sizeof(char) * 15);
   tmp1->name="manoj";
   strcpy(tmp1->name,val);
   tmp1->age=n;
   tmp1->next=tmp->next;
   tmp->next=tmp1;
}

void print(struct sort *root)
{
  while(!root->next)
  {
    printf("\n%s",root->next->name);
    root=root->next;
  }
}

int main()
{
  char a[15];
  int n;
  head=NULL;
  head=init();
  while(1)
  {
     scanf("%s %d",a,&n);
     if(strcmp(a,"manoj")==0)
       break;
//       printf("%s",head->name);
     insert(head,a,n);    
  }
  print(head);
  return 0;
}
