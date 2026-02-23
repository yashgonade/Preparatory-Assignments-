#include <stdio.h>
#include <string.h>

// Create structure
struct Student 
{
    char studentName[50];
    char rollNo[20];      // Alphanumeric roll number
    float totalMarks;
};

// Function to read student data
void readStudent(struct Student *s)
{
    printf("Enter Student Name: ");
    scanf(" %[^\n]", s->studentName);   // To read full name

    printf("Enter Roll Number: ");
    scanf("%s", s->rollNo);             // Alphanumeric

    printf("Enter Total Marks: ");
    scanf("%f", &s->totalMarks);
}

// Function to display student data
void displayStudent(struct Student s) 
{
    printf("\n--- Student Details ---\n");
    printf("Name       : %s\n", s.studentName);
    printf("Roll No    : %s\n", s.rollNo);
    printf("Total Marks: %.2f\n", s.totalMarks);
}

// Main function
int main() 
{
    struct Student s1;

    readStudent(&s1);
    displayStudent(s1);

    return 0;
}