#include<stdio.h>
#include<malloc.h>

struct list
{
  int data;
  struct list *next;
}*head;

void append(struct list *head,int x)
{
  struct list *tmp,*tmp1;
  tmp=head;
  while(tmp->next!=NULL && (tmp->next->data )<x)
    tmp=tmp->next;   
    tmp1=malloc(sizeof(struct list *));
    tmp1->data=x;
    tmp1->next=tmp->next;
    tmp->next=tmp1;
}

struct list * init()
{
struct list *tmp;
  tmp=malloc(sizeof(struct list *));
  tmp->data=-1;
  tmp->next=NULL;
  return tmp;
}

void check(struct list *root)
{
  struct list *tmp;
  tmp=root->next;
  while(tmp)
  {
    if((tmp->data - root->data) <=200)
    {
       root=tmp;
       tmp=tmp->next;       
    } 
    else
     {
       printf("\nIMPOSSIBLE");
       return;
     }  
  }
  if(2*(1422 - root->data) > 200 )
   printf("\nIMPOSSIBLE");
  else  
   printf("\nPOSSIBLE");
  
}

int main()
{
  int n,i,val;
  while(1)
  {
    head=NULL;
    head=init();
    scanf("%d",&n);
    if(n==0)
     break;
    for(i=0;i<n;i++)
    {
      scanf("%d",&val);
      append(head,val);
    }  
    check(head->next);  
  }
  return 0;
}
