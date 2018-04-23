#include <stdio.h>
struct student
{
    char name[50]; // reserve space via buffer
    int ID; // declare
    float grades; // declare
} s[10]; // allocate space or variable

int main()
{
    int i;

    printf("Enter information of students:\n"); // input prompt


    for(i=0; i<10; ++i) // for loop to store info
    {
        s[i].ID = i+1;

        printf("\nFor ID # %d,\n",s[i].ID);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter grades: ");
        scanf("%f",&s[i].grades);

        printf("\n");
    }

    printf("Displaying Information:\n\n");

    for(i=0; i<10; ++i)  // for loop displays info
    {
        printf("\nID number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("grades: %.1f",s[i].grades);
        printf("\n");
    }
    return 0;
}