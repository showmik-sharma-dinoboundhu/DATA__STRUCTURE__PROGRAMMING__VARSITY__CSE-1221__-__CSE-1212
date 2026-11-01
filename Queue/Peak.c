#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void display()
{
    if(front == -1 || front > rear)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        printf("QUEUE: ");

        for(int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

void enqueue(int num)
{
    if(rear == MAX - 1)
    {
        printf("QUEUE OVERFLOW\n");
        return;
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }

    queue[rear] = num;
}

void dequeue()
{
    int val;

    if(front == -1 || front > rear)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        val = queue[front];
        printf("Deleted element: %d\n", val);

        front++;

        if(front > rear)
        {
            front = rear = -1;
        }
    }
}

void peek()
{
    if(front == -1 || front > rear)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        printf("Front element: %d\n", queue[front]);
    }
}

int main()
{
    display();

    enqueue(33);
    enqueue(47);
    enqueue(2);
    enqueue(68);

    display();

    dequeue();
    dequeue();

    enqueue(55);

    display();

    peek();

    return 0;
}