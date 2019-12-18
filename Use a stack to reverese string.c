#include<stdio.h>
#include<string.h>
char a[100],st[20];
char c;
int top=-1,max=20;
void push(char a)
 {
   if(top>=max)
     printf("Overflow");
   else
     {
       top++;
       st[top]=a;
       printf("%c Value inserted Successfully\n",a);
     }
   }
char pop(char a[15])
 {
  if(top==-1)
   printf("Underflow");
  else
  { 
   
  
  c=a[top];
  top--;
 }
 return c;
 }
 void main()
  {
   printf("Enter the string:");
   scanf("%s",a);
   int i;
   for(i=0;i<strlen(a);i++)
   push(a[i]);
   
   printf("%s\n",st);
   for(i=0;i<strlen(a);i++)
   {
   char d=pop(st);
   printf("%c",d);
  }
  }
 
