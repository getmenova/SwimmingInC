#include <stdio.h>
struct worker
{
    char name[75]; // reserve space via buffer
    int employeeID; // declare
    float hrsworked; // declare
} s[10]; // allocate space or variable

int main()
{
    int i;

    printf("Enter information of workers:\n"); // input prompt


    for(i=0; i<10; ++i) // for loop to store info
    {
        s[i].employeeID = i+1;

        printf("\nFor employee ID # %d,\n",s[i].employeeID);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter total hours worked: ");
        scanf("%f",&s[i].hrsworked);

        printf("\n");
    }

    printf("Working Hours Data List:\n\n");

    for(i=0; i<10; ++i)  // for loop displays info
    {
        printf("\nemployeeID number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Hours worked: %.1f",s[i].hrsworked);
        printf("\n");
    }
    return 0;
}