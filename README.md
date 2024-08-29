# LIFO_Array stack

## Question: Implement a LIFO stack using a static array in C.

First, define the array that will represent the stack and set a limit of 5 elements (STACK_LENGTH). We chose an integer array named "mystack." We also define a variable called "top" to track the stack's capacity and set "EMPTY" to -1 to indicate when the stack is empty. The "mystack" array is initialized with "STACK_LENGTH" and "top" is set to "EMPTY."

Next, we implement the following functions to allow the user to interact with the stack through a main menu:

- push(): Adds a number to the stack. If the stack is full, the message 'Push Failed, stack is full' is displayed.
- pop(): Removes the last element from the stack by decrementing "top" by one. Since the stack is implemented using an array, we can't dynamically change its size. Instead, we adjust the "top" variable to replace the value of an element in the array—either setting it to zero when removing or setting it to the user's input when adding.
- print_stack(): Displays the current elements in the stack.
  Upon starting the program, the user is presented with four options:

Add an integer to the stack: The user adds a number to the stack.
Pop values from the stack: The user removes the last element from the stack.
Print stack values: The current stack elements are displayed.
Exit: Terminates the program.

# Lifo_LinkedList stack

## Implement a LIFO stack using a linked list in C.

Similar to the previous task, we aim to create a LIFO (Last In First Out) stack, but this time using a linked list. First, we define a struct node that includes a value (the stack's value) and a pointer next that stores the address of the next node in the list.

Next, we declare a global pointer head, which will always point to the first element of the list or to NULL if the list is empty.

The following functions are implemented for stack operations through a main menu:

- push(): In this function, a local pointer \*newnode is created, and memory is allocated using malloc() to store the new value in the stack. If head is NULL, newnode becomes the head, and its next pointer is set to NULL. Otherwise, newnode->next is set to head, and then head is updated to newnode, linking the new element at the beginning of the list.

- pop(): This function checks if head is NULL (indicating an empty list). If not, it prints the value to be removed, updates head to the next node, effectively removing the top element from the stack.

- readstack(): This function uses a temporary pointer \*tmp to traverse the list, starting from head. It prints each element's value until it reaches NULL, signaling the end of the list.

In the main function, the user is presented with the following menu:

Add an integer to the stack: Calls the push() function to add a value to the stack.
Pop values from the stack: Calls the pop() function to remove the last element.
Print stack values: Calls the readstack() function to display all elements in the stack.
Exit: Breaks the loop to exit the program.

# StudentList.c

## The assignment had the following requirements:

Student Record Representation:

Develop C code to represent a student record, including fields such as student ID, surname, first name, father's name, mother's name, residential address, landline number, mobile number, and selected first-semester course.
Student Collection Representation:

Implement C code to represent a collection of student records using an array of structs.
Pointer Structure for Course Selection:

Use a pointer structure to access all students who have selected a specific course.
