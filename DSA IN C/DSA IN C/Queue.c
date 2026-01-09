# include <stdio.h>
# define n 10
int front=0;
int rear=-1;
int queue[n];
int x;

void insert()
{
    if(rear==n-1)
    {
        printf("\n Queue is overflow.");
    }
    else{
        printf("\n Enter the value to be inserted:");
        scanf("%d",&x);
    }
    rear++;
    queue[rear]=x;
}

void delete()
{
    if(front>rear)
    {
        printf("\n Queue is empty");
    }
          
    else {
        printf("\n Enter the value to be deleted:%d",queue[front]);
        front++;
    }

}

void display()
{
    if(front>rear)
    {
        printf("\n The queue is empty");
    }
    else{
        printf("\n The value to be displayed:");
        for(int i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
        printf("\n");
    }
}

void main(){
    int choice;
    while(1)
    {
        printf("\n--------------QUEUE-------------------");
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        printf("\n Enter your choice.");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert();
            break;

            case 2:
            delete();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("\n Exit your program");
            break;

            default:
            printf("\n Invalid choice.");
        }
    }
}