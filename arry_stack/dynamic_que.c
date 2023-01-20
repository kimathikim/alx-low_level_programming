#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *front, *rear;

void insert();
void dele();
void disp();

void insert(){
    struct node * temp;

    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the Element to be added: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if(rear == NULL){
        front = rear = temp;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}
void dele()
{
    struct node *temp;
    temp = front;
    if (front == NULL){
        printf("Queue is empty\n");
        front = rear = NULL;
    }
    else{
        printf("Element deleted is: %d\n", front->data);
        front = front->next;
        free(temp);
    }
}
void disp(){
    struct node *temp;
    temp = front;
    if(front == NULL){
        printf("Queue is empty!\n");
        front = rear = NULL;
    }
    else{
        while(temp){
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    printf("*****Welcome*****\n");
    int choice;
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