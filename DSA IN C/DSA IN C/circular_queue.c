# include <stdio.h>
# define Maxsize 10
int cq[Maxsize];
int front=-1,rear=-1;
int n;

void enqueue()
{
    if((rear+1)%Maxsize==front){
    printf("\n Circular Queue is overflow.");
    }
    else{
        printf("\n Enter the element to be inserted:");
        scanf("%d",&n);
        if(rear==-1 && front==-1)
        {
            rear=0;
            front=0;
        }
        else{
        rear=(rear+1)%Maxsize;
        }
        cq[rear]=n;

    }
}
void dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("\n Circular Queue is empty.");
    }
    else{
        cq[front]=n;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%Maxsize;
        }
        printf("\n The deleted element is %d",n);
    }
}
void display()
{
    if(rear==-1 && front==-1)
    printf("\n Circular Queue is empty.");
    else{
        printf("\n The displayed element is:");
        for(int i=front;i!=rear;(i=(i+1)%Maxsize))
        {
            printf("%d",cq[i]);
        }
    }
}

int  main()
{
    int choice;
    while(1)
    {
        printf("\n-------------------CIRCULAR QUEUE---------------------");
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
            printf("\n Exit your program.");
            break;

            default:
            printf("\n Invalid Choice.");
        }
    }
}