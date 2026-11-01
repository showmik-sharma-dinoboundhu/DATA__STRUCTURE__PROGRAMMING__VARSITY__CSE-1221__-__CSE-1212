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


int main()
{
    display();

    enqueue(33);
    enqueue(47);
    enqueue(2);
    enqueue(68);

    display();

    return 0;
}