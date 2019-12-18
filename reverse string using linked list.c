#include<stdio.h>
#include<string.h>
struct node
{
 char data;
 struct node* next;
}*start=NULL;

char a[10];
void insert(char c,struct node* new)
{
  if(start==NULL)
   {
     new->data=c;
     new->next=NULL;
   }
   else
   {
    new->data=c;
    new->next=start;
    
   }
   start=new;
}

void main()
{
   printf("Enter the string:");
   scanf("%s",a);
int i;
for(i=0;i<strlen(a);i++)
{
struct node *new= (struct node*)malloc(sizeof(struct node*));
insert(a[i],new);
}
struct node* temp=start;
while(temp->next!=NULL)
{ 	
  printf("%c",temp->data);
  temp=temp->next;
  
}
printf("%c",temp->data);
}
