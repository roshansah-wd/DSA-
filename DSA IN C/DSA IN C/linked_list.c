# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

struct node {
    struct node* add;
    int data;
};struct node *start=NULL, *new1,*temp,*prev,*next;

void create()
{
    int n;
    char ch;
    printf("\n Enter the value of elements: ");
    scanf("%d",&n);
    start=(struct node*)(malloc(sizeof(struct node)));
    start->data=n;
    start->add=NULL;

    temp=start;
    printf("\n want to Continue: ");
    ch=getche();
    while(ch=='y'||ch=='Y')
    {
        printf("\n Enter the next element for insert");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->add=NULL;
        temp->add=new1;
        temp=temp->add;
        printf("\n Want to continue");
        ch=getche();
    }
}

void display()
{
    if(start==NULL)
    {
        printf("\n List not found.");
    }
    else {
        temp=start;
        while(temp!=NULL)
        {
            printf("%d \t",temp->data);
        temp=temp->add;
        }
    }
}

void insert_first()
{
    int n;
    if(start==NULL)
    {
        printf("\n List not found.");
    }
    else {
        printf("\n Enter the new element for insert first");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->add=NULL;
        new1->add=start;
        start=new1;
    }
}

void insert_last()
{
    int n;
    if(start==NULL)
    {
        printf("\n List not found.");
    }
    else {
        printf("\n Enter the element for insert last");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->add=NULL;
        temp=start;
        while(temp->add!=NULL)
        {
            temp=temp->add;
        }
        temp->add=new1;
    }
}

void insert_middle()
{
    int n;
    int pos,i=1;
    if(start==NULL)
    {
        printf("\n List not found.");
    }
    else {
        printf("\n Enter the element for middle");
        scanf("%d",&n);
        new1=(struct node*)(malloc(sizeof(struct node)));
        new1->data=n;
        new1->add=NULL;

        printf("\n Enter your position");
        scanf("%d",&pos);
        next=start;
        while(i<pos)
        {
            prev=next;
            next=next->add;
            i++;
        }
        prev->add=new1;
        new1->add=next;

    }
}

void delete_first()
{
    if(start==NULL)
    {
        printf("\n List not found.");
    }
    else {
        temp=start;
        start=start->add;   
        printf("\n Deleted Element of insert_first: %d",temp->data);
        free(temp);
    }
}

void delete_last()
{
    if(start==NULL)
    {
        printf("\n List not found.");
    }
    else {
        temp=start;
        while(temp->add!=NULL)
        {
            prev=temp;
            temp=temp->add;
        }
        prev->add=NULL;
        printf("\n Deleted last node is %d",temp->data);
        free(temp);
    }
}

void delete_middle()
{
    int pos,i=1;
    if(start==NULL)
    {
        printf("\n List not found.");
    }
    else{
        printf("\n Enter the position.");
        scanf("%d",&pos);
        while(i<pos)
        {
            prev=temp;
            temp=temp->add;
            i++;
        }
        next=temp->add;
        prev->add=next;
        printf("\n Deleted node is %d",temp->data);
        free(temp);
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("\n-----------------LINKED LIST----------------------");
        printf("\n1.Create\n2.Display\n3.Insert_first\n4.Insert_last\n5.Insert_middle\n6.Delete_first\n7.Delete_last\n8.Delete_middle\n9.Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            create();
            break;

            case 2:
            display();
            break;

            case 3:
            insert_first();
            break;

            case 4:
            insert_last();
            break;

            case 5:
            insert_middle();
            break;

            case 6:
            delete_first();
            break;

            case 7:
            delete_last();
            break;

            case 8:
            delete_middle();
            break;

            case 9:
            printf("\n Exit your program");
            break;


            default:
            printf("\n Invalid your choice");

        }
    }
}