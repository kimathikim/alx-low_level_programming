#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

struct node
{
    int data;
    struct node *next;
};

struct node *temp;

void push()
{
    int data;
    struct node *pointer = (struct node *)malloc(sizeof(struct node));
    if (pointer == NULL)
    {
        printf("Stack overflow\n");
    }
    else
    {
        printf("Enter element to be inserted: ");
        scanf("%d", &data);
        if (temp == NULL)
        {
            pointer->data = data;
            pointer->next = NULL;
            temp = pointer;
        }
        else
        {
            pointer->data = data;
            pointer->next = temp;
            temp = pointer;
        }
    }
}

void pop(){
    int item;
    struct node *pointer;
    if (temp == NULL){
        printf("Stack underflow");
    }
    else{
        printf("The deleted item is: %d\n", temp->data);
        pointer = temp;
        temp = temp->next;
        free(pointer);
    }
}
void display(){
    struct node *navigator;
    navigator = temp;
    if (navigator == NULL){
        printf("Stuck underflow");
    }
    else{
        printf("Elements in the stack are:\n");
        while (navigator != NULL)
        {
            printf("%d\n", navigator->data);
            navigator = navigator->next;
        }
    }
}
int main()
{
    printf("Welcome\n");
    int choice;
    do
    {
        printf("1. insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
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
            exit(0);
            break;
        default:
            printf("Wrong input!!! Try again!!\n");
            break;
        }
    } while (choice != 4);
    return (0);
}