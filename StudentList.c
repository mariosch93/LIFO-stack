#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int am;
    char surname[30];
    char firstname[30];
    char father_name[30];
    char mother_name[30];
    char adress[30];
    double homenumber;
    double phonenumber;
    char lesson[30];

    struct student *next;
};

struct student *head; // το head θα δείχνει κάθε φορά στο τελευταίο στοιχείο οπου εχει μπει στη λίστα

void add()
{
    struct student *pts;
    pts = (struct student *)malloc(sizeof(struct student));
    printf("Give Student's Data: \n");
    printf("Enter Student's Am: ");
    scanf("%d", &pts->am);
    printf("Enter Student's surname: ");
    scanf("%s", pts->surname);
    printf("Enter Student's first name: ");
    scanf("%s", pts->firstname);
    printf("Enter Student's father name: ");
    scanf("%s", pts->father_name);
    printf("Enter Student's mother name: ");
    scanf("%s", pts->mother_name);
    printf("Enter Student's adress: ");
    scanf("%s", pts->adress);
    printf("Enter Student's home number: ");
    scanf("%lf", &pts->homenumber);
    printf("Enter Student's phone number: ");
    scanf("%lf", &pts->phonenumber);
    printf("Enter Student's chosen course: ");
    scanf("%s", pts->lesson);
    pts->next = head;
    head = pts;
}

void lesson_filter()
{
    struct student *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("The list is empty...");
    }
    else
    {
        char given_lesson[20] = "";
        printf("Search students by lesson: ");
        scanf("%s", given_lesson);

        while (temp != NULL)
        {
            if (strcmp(temp->lesson, given_lesson) == 0)
            {
                printf("This lesson was  chosen by student: %s %s \n", temp->surname, temp->firstname);
            }
            temp = temp->next;
        }
    }
}

int main()
{
    int i;
    while (1)
    {
        printf("\n1. to add students in an array (Q1 & Q2)\n");
        printf("2. to add students in a linked list (Q3)\n");
        printf("3.Exit program.\n");
        printf("\nChoose option: ");
        scanf("%d", &i);
        if (i == 1)
        {
            printf("\nHow many students do you wish to add: ");
            int num_students;
            scanf("%d", &num_students);
            struct student students[num_students];
            for (int i = 0; i < num_students; i++)
            {
                printf("\nGive %d Student Data: \n", i + 1);
                printf("Enter Student's Am: ");
                scanf("%d", &students[i].am);
                printf("Enter Student's surname: ");
                scanf("%s", students[i].surname);
                printf("Enter Student's first name: ");
                scanf("%s", students[i].firstname);
                printf("Enter Student's father name: ");
                scanf("%s", students[i].father_name);
                printf("Enter Student's mother name: ");
                scanf("%s", students[i].mother_name);
                printf("Enter Student's adress: ");
                scanf("%s", students[i].adress);
                printf("Enter Student's home number: ");
                scanf("%lf", &students[i].homenumber);
                printf("Enter Student's phone number: ");
                scanf("%lf", &students[i].phonenumber);
                printf("Enter Student's chosen course: ");
                scanf("%s", students[i].lesson);
            }
            for (int i = 0; i < num_students; i++)
            {
                printf("\nStudent(%d) data: AM: %d, Surname: %s, First name: %s, \nFather's name: %s, Mother's name: %s, Adress: %s, \nHome number: %.0lf, Phonenumber: %.0lf, Lesson of choice: %s\n", i + 1, students[i].am, students[i].surname, students[i].firstname, students[i].father_name, students[i].mother_name, students[i].adress, students[i].homenumber, students[i].phonenumber, students[i].lesson);
            }
        }
        if (i == 2)
        {
            while (1)
            {
                int j;
                printf("1. Add students \n");
                printf("2. Filter students by lesson\n");
                printf("3.Exit\n");
                printf("\nChoose option: ");
                scanf("%d", &j);
                if (j == 1)
                {
                    add();
                }
                if (j == 2)
                {
                    lesson_filter();
                }
                if (j == 3)
                {
                    printf("\n-->Program terminated successfully\n");
                    break;
                }
            }
        }
        if (i == 3)
        {
            printf("\n-->Program terminated successfully\n");
            break;
        }
    }
    return 0;
}