/******************************************************************************
*******************************************************************************/
#include <stdio.h>
#define MAX 50

int front=-1;
int rear=-1;
int arr[MAX];

void Enqueue(int num)
{
    if(rear==MAX-1)
    {
        printf("Queue is overflow\n");
    } else {
        if(front==-1)
        {
            front=0;
        }
        rear=rear+1;
        arr[rear]=num;
        
    }
}

int Dequeue()
{
    if(front==-1 || front > rear)
    {
        printf("Queue is underflow\n");
        return -1;
    } else {
        int temp=arr[front];
        front=front+1;
    }
}

void display()
{
    printf("Queue element is \n");
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    printf("1. for inser \n 2. delete \n3. display");
    while(1)
    {
        int choice;
        int num;
        printf("enter a choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            
            printf("Enter element to enque\n");
            scanf("%d",&num);
            Enqueue(num);
            break;
            case 2:
            Dequeue();
            break;
            case 3:
            display();
            break;
        }
    }
    

    return 0;
}
