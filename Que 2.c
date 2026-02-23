//Q2. Write a program to calculate a Factorial of a number.

#include <stdio.h>

int main() 
{
    int number, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: "); // Ask user to enter a number
    scanf("%d", &number);

    if (number < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        for (i = 1; i <= number; i++) // Calculate factorial using loop
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}
