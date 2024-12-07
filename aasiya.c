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
}
