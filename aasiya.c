<<<<<<< HEAD
#include<stdio.h>
void main()
{
int item,ch;
clrscr();
while(1)
{
printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:if(queuefull())
{
printf("circular queue is overflow\n");
}
else
{ 
printf("enter the item to be insert:\n"); 
scanf("%d",&item); 
insert(item); 
} 
break; 
case 2:item=delete(); 
if(item!=-1) 
printf("the deleted element from the circlar queue is %d\n",item); 
break; 
case 3:display(); 
break; 
case 4:exit(0); 
default :printf("invalid choice\n"); 
break;
}
}
=======
<<<<<<< HEAD
//*dixitha message
int delete()
{
int element;
if(queueempty())
{
=======
<<<<<<< HEAD
void display() 
{ 
int i; 
if(queueempty()) 
printf("circular queue is empty\n"); 
else 
{ 
for(i=f;i!=r;i=(i+1)%MAX) 
{ 
printf("cqueue[%d];",i); 
printf("%d\n",cqueue[i]); 
} 
printf("cqueue[%d]:",i); 
printf("%d\n",cqueue[i]); 
} 
=======
void insert(int item) 
{ 
if(f==-1) 
f=0; 
r=(r+1)%MAX; 
cqueue[r]=item; 
} 
int delete() 
{ 
int element; 
if(queueempty()) 
{ 
>>>>>>> ba3f7b201c57a44959f54359ec9b0fc234cb9aad
printf("circular queue is underflow\n");
return -1;
}
else
{
element=cqueue[f];
if(f==r)
{
f=-1;r=-1;
}
else
f=(f+1)%MAX;
return element;
}
<<<<<<< HEAD
=======
>>>>>>> 18e4be761fba67e5ddd697c588c00df6b676a7cd
>>>>>>> ba3f7b201c57a44959f54359ec9b0fc234cb9aad
>>>>>>> 4a0d6b506a68bf73ae5aa4791358486eb978ff61
}
