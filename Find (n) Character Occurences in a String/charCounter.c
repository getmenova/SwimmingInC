#include <stdio.h>
#define MAX_LIMIT 1000

int main()
{
   char str[MAX_LIMIT], x;  //create space for up to 1k characters
   int i, charcount = 0; // declare var i, set counter to 0
   printf("Enter the complete string you will be picking characters out of: "); //take user input for string
   fgets(str, MAX_LIMIT, stdin);

   printf("Enter the character you are searching for: "); //prompts user input
   scanf("%c",&x); //scans for char (x)

   for(i = 0; str[i] != '\0'; ++i)  //run until char is found, then null terminate and increment
   {
       if(x == str[i]) // if char within string is found, increment counter
           ++charcount;
   }

   printf("We found your character (n) times! Total times we located %c = %d.", x, charcount); // finally we return result to user using our placeholder vars

   return 0;
}

