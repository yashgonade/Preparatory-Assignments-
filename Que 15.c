// Input a string from the user. Count occurrences (case insensitive) of each alphabet in the string.

#include <stdio.h>
#include <ctype.h>   // for tolower()

int main()
{
    char str[200];
    int count[26] = {0};   // Array to store count of a-z
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character
    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))   // Check if character is alphabet
        {
            char ch = tolower(str[i]);   // Convert to lowercase
            count[ch - 'a']++;           // Increase count
        }
    }

    printf("\nOccurrences of each alphabet:\n");

    // Display result
    for(i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            printf("%c = %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}