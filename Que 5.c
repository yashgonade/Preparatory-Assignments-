#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') // Check for uppercase letter
    {
        printf("It is an Uppercase letter.\n"); 
    }
    else if (ch >= 'a' && ch <= 'z') // Check for lowercase letter
    {
        printf("It is a Lowercase letter.\n");
    }
    
    else if (ch >= '0' && ch <= '9') // Check for digit
    {
        printf("It is a Digit.\n");
    }
   
    else  // If none of the above
    {
        printf("It is a Special character.\n");
    }

    return 0;
}
