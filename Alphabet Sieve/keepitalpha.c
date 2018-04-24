#include<stdio.h>
#define MAX_LIMIT 1000
int main()
{
    char str[MAX_LIMIT]; // support up to 1k chars
    int i, j;
    printf("Please enter a string: "); // prompts user for input
    fgets(str, MAX_LIMIT, stdin);

    for(i = 0; str[i] != '\0'; ++i) // iterate for loop
    {
        while (!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0') )//ensure it's ALPHA
        {
            for(j = i; str[j] != '\0'; ++j) //if it's not null, increment
            {
                str[j] = str[j+1]; // append
            }
            str[j] = '\0'; // terminate
        }
    }
    printf("We've erased the junk! Only alpha remains: "); // return
    puts(str); // output up to but not including the null character + adds NL
    return 0;
}