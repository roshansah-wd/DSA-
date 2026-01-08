# include <stdio.h>
# define MAXSIZE 10
int top=-1;
int n;
int stack[MAXSIZE];
void push()
{
    if(top==MAXSIZE-1)
    {
        printf("\n Stack overflow");
    }
    else{
        printf("\n Enter the given element to be pushed.");
        scanf("%d",&n);
        
    }
    top++;
    stack[top]=n;
}

void pop()
{
    if(top==-1)
    {
        printf("\n Stack underflow");
    }
    else {
printf("The popped element is %d",stack[top]); 
   }
    top--;
}

void display()
{
    if(top>=0)
    {
        printf("\n The element to be displayed :");
        for(int i=top;i>=0;i--)
        {
            printf("\t %d",stack[i]);
        }
    }
    else {
        printf("\n Stack is empty");
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n--------------STACK---------------------");
        printf("\n1.push\n2.pop\n3.display\n4.exit");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("\n Exit your program");
            break;
            
            default:
            printf("\n Invalid Choice");
        }
    }
}