#include<stdio.h>
#define max 5

int mystack[max], top = -1;

void display(int mystack[])
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for(int i = top; i >= 0; i--)
        {
            printf("%d\n", mystack[i]);
        }
        printf("\n");
    }
}

void push(int mystack[], int val)
{
    if(top == max - 1)
    {
        printf("Stack Overflow \n");
    }
    else
    {
        top++;
        mystack[top] = val;
    }
}

void pop(int mystack[])
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        top-- ;
    }
}

int main()
{
    display(mystack);

    push(mystack, 5);
    push(mystack, 23);
    push(mystack, 12);
    push(mystack, 61);

    display(mystack);

    pop(mystack);

    display(mystack);

    return 0;
}