//Q4. Write a program to calculate the grade of a student. There are five subjects. Marks in each subject are entered from keyboard

#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5;
    float total, average;

    // Taking input from user
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    // Calculating total and average
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;

    // Display total and average
    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    // Assigning grade
    if (average >= 90)
        printf("Grade: Ex\n");
    else if (average >= 80)
        printf("Grade: A\n");
    else if (average >= 70)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");

    return 0;
}