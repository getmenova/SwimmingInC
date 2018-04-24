#include <stdio.h>
#include <string.h>

int main(){
    char input[140]; // supports up to 140 characters. - or length of a tweet
    int i, length;
    int count = 0;

    printf("Enter your single string:"); //prompt user for input
    scanf("%s", input); // take in input

    length = strlen(input); // assign variable

    for(i=0;i < length ;i++){ // for loop iterates and compares front to back, back to front from outside in
        if(input[i] != input[length-i-1]){
            count = 1;
            break;
   }
}

    if (count) {
        printf("Womp womp...%s is not a palindrome.", input); //if it is a palindrome then
    }
    else {
        printf("Well, well... %s is a palindrome.", input);
    }
    return 0;
}