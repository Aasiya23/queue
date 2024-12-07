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
}
