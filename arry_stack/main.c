// #include <main.h>
#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100

int stack[LIMIT]; // Array implementation of stack
int top = -1;          // To insert and delete the data elements in the stack
int i;            // To traverse the loop to while displaying the stack
int choice;       // To choose either of the 3 stack operations
void push();      // Function used to insert the element into the stack
void pop();       // Function used to delete the element from the stack
void display();   // Function used to display all the elements in the stack according to LIFO ru

void push()
{
    int element;
    if (top == LIMIT - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        printf("Please enter elment to add:");
        scanf("%d", &element);
        top++;
        stack[top] = element;
    }
}
void display()
{
    if(top == -1)
    {
        printf("Stack underflow!!!\n");
    }
    else if (top >= 0)
    {
        printf("Elements in the stack are: \n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }

}
void pop(){
    int element;
    if (top == -1){
        printf("Stack is empty already\n\n");
    }
    else{
        element = stack[top];
        printf("%d is the element deleted\n",stack[top]);
        top--;
    }
}
int main()
{
    printf("Hello welcome!!!\n");
    do
    {
        printf("1. insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Kindly chose an operation you wish to compete: ");
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
    return 0;
}