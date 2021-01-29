#include<stdio.h>
int stack[100],ch,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void peek(void);
int main()
{
    printf("\n\t STACK OPERATIONS USING ARRAY");
    top=-1;
    printf("\n Enter the size required: ");
    scanf("%d",&n);
    
    
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.PEEK\n 5.EXIT\n");
    do
    {
        printf("\n Enter your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                peek();
                break;
            }
            case 5:
            {
                printf("\n EXIT");
                break;
            }
            default:
            {
                printf ("\n Invalid Choice");
            }
                
        }
    }
    while(ch!=5);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n Stack  Overflow");
        
    }
    else
    {
        printf(" Enter the element:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack Underflow");
    }
    else
    {
        printf("\n The popped elements is: %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in Stack are: ");
        for(i=top; i>=0; i--)
            printf("\n %d",stack[i]);
    }
    else
    {
        printf("\n The Stack is Empty");
    }
   
}
void peek()
{
    if(top==-1)
      printf("No elements");
    else
      printf("Top element is %d",stack[top]);
     
}


