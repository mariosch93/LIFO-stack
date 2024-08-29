#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *head = NULL;

int push(int value)
{
    // the integer is that we are pushing into the stack
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Push Failed...ran out of memory "); // it can fail if the stack is too big
        return 1;
    }
    newnode->value = value; // we update the value to be the new integer we passed in
    newnode->next = head;   // we point the head which is the top of the list
    head = newnode;         // we update the head so it points to the new node(new top of the stack)
    printf("-->Value successfully pushed\n");
}

int pop()
{
    // remove the top element of the stack
    if (head == NULL) // we check to see if the stack is empty
    {
        printf("The stack is empty...\n");
        return 1;
    }
    int result = head->value; // we save the value thats on top of the stack
    struct node *tmp = head;  // we save the head to tmp
    head = head->next;        // we move the head to the next element of the list
    free(tmp);                // we then free the node that was on the top
    printf("--> Value (%d) successfully popped\n", result);
}

void readStack()
{
    struct node *tmp;
    tmp = head;
    if (tmp == NULL)
    {
        printf("Stack is empty...\n");
        return;
    }
    else
    {
        int i = 1;
        while (tmp != NULL)
        {
            printf("-->The stack contains: %d\n", tmp->value);
            tmp = tmp->next;
            i++;
            printf("------------------------\n");
        }
    }
}

int main()
{
    while (1)
    {
        printf("\n1.Add an integer to the Stack \n");
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
            readStack();
        }
        if (choice == 4)
        {
            printf("\n-->Program terminated successfully\n");
            break;
        }
    }
    return 0;
}