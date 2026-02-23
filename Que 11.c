#include <stdio.h>
#include <string.h>

// Define structure
struct emp {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

// Function to initialize employee
void emp_init(struct emp* e) {
    printf("Enter First Name: ");
    scanf("%s", e->firstName);

    printf("Enter Last Name: ");
    scanf("%s", e->lastName);

    printf("Enter Monthly Salary: ");
    scanf("%lf", &e->monthlySalary);

    // If salary is negative, make it 0
    if (e->monthlySalary < 0) {
        e->monthlySalary = 0.0;
    }
}

// Function to set/modify salary
void set_salary(struct emp *e, double sal) {
    if (sal >= 0)
        e->monthlySalary = sal;
}

// Function to display employee details
void emp_display(struct emp *e) {
    printf("\nEmployee Name: %s %s", e->firstName, e->lastName);
    printf("\nMonthly Salary: %.2lf", e->monthlySalary);
    printf("\nYearly Salary: %.2lf\n", e->monthlySalary * 12);
}

int main() {
    struct emp e1, e2;

    printf("Enter details for Employee 1:\n");
    emp_init(&e1);

    printf("\nEnter details for Employee 2:\n");
    emp_init(&e2);

    // Display original yearly salaries
    printf("\n--- Original Salaries ---\n");
    emp_display(&e1);
    emp_display(&e2);

    // Give 10% raise
    set_salary(&e1, e1.monthlySalary * 1.10);
    set_salary(&e2, e2.monthlySalary * 1.10);

    // Display updated yearly salaries
    printf("\n--- After 10%% Raise ---\n");
    emp_display(&e1);
    emp_display(&e2);

    return 0;
}