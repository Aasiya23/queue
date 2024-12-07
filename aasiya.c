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
}
