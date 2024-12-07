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
}
