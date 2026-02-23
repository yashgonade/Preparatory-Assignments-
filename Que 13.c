#include <stdio.h>
#include <string.h>

int main()
{
    // Declare and initialize array of strings
    char *arr[] = 
    {
        "apple",
        "banana",
        "orange",
        "apple",
        "grapes",
        "banana"
    };

    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    printf("Duplicated strings are:\n");

    // Compare each string with remaining strings
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(strcmp(arr[i], arr[j]) == 0)
            {
                printf("%s\n", arr[i]);
                break;   // Avoid printing same duplicate multiple times
            }
        }
    }

    return 0;
}