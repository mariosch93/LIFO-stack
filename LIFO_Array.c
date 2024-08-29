#include <stdio.h>

#define STACK_LENGTH 5 // We define that our stack can hold 5 values
#define EMPTY (-1)     // means that our stack is empty

int mystack[STACK_LENGTH];
int top = EMPTY;

void push(int value)
{
    // the integer is that we are pushing into the stack
    if (top >= STACK_LENGTH - 1)
    {
        printf("Push Failed, stack is full\n");
    }
    top++;                                            // increment the top variable
    mystack[top] = value;                             // we save the new value we want to push at the new top of the array
    printf("Value (%d) sucessfully pushed\n", value); // we succssfully pushed a value onto our stack
}

int pop()
{
    // remove the top element of the stack
    if (top == EMPTY) // we check to see if the stack is empty
    {
        printf("The stack is empty...\n");
        return 1;
    }
    int result = mystack[top]; // we save the value thats on top of the stack
    printf("Value (%d) successfully popped\n", result);
    mystack[top] = 0; // we set the value to 0 so we can the empty spaces while printing the stack
    top--;            // we move the top of the stack down by one
    // we are not actually removing the element we popped off, we are just moving the top down so
    // the next time we push, it is going to replace that one we just put on top of the one we just removed
    return 0;
}

void print_stack()
{
    for (int i = 0; i < STACK_LENGTH; i++)
    {
        printf("the stack contains :%d\n", mystack[i]);
    }
}

int main()
{
    while (1)
    {
        printf("\n1.Add an integer to the Stack (Max 5)\n");
        printf("2.Pop values from the stack\n");
        printf("3.Print stack values\n");
        printf("4.Exit\n");
        int choice;
        printf("\nChoose option: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nType a value to push into the stack: ");
            int given_number;
            scanf("%d", &given_number);
            push(given_number);
        }
        if (choice == 2)
        {
            pop();
        }
        if (choice == 3)
        {
            print_stack();
        }
        if (choice == 4)
        {
            printf("\n-->Program terminated successfully\n");
            break;
        }
    }
    return 0;
}