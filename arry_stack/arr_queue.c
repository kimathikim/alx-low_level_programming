#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100

int queue[LIMIT];
int front, rear;
int i;
void insert();
void dele();
void disp();

void insert()
{
    int element;
    if (rear == LIMIT - 1)
        printf("Queue overflow\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter element to add: ");
        scanf("%d", &element);
        rear++;
        queue[rear] = element;
    }
}

void dele()
{
    if (front == -1 || front >= rear)
    {
        printf("Queue underflow\n");
    }
    else
    {
        printf("Element deleted is %d\n", queue[front]);
        front++;
    }
}

void disp()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("HERE ARE THE ELEMENT IN THE QUEUE:)\n");
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}
int main()
{
    int choice;
    printf("*****WELCOME*****\n");
    front = rear = -1;
    do
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            dele();
            break;
        case 3:
            disp();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Sorry, invalid choice!\n");
            break;
        }
    } while (choice != 4);
    return 0;
}