#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STUDENT 10
#define LENGTH 50

// Comparison function for qsort
int compareNames(const void *a, const void *b)
{
    // Typecasting to string
    const char *name1 = (const char *)a;
    const char *name2 = (const char *)b;

    return strcmp(name1, name2);
}

int main()
{
    char Student[STUDENT][LENGTH];
    int n, i;

    printf("Enter number of students (max 10): ");
    scanf("%d", &n);

    // Clear newline left by scanf
    getchar();

    if (n > 10)
    {
        printf("Maximum limit is 10.\n");
        return 0;
    }

    // Input names
    for (i = 0; i < n; i++)
    {
        printf("Enter Student name %d: ", i + 1);
        fgets(Student[i], 50, stdin);

        // Remove newline character
        Student[i][strcspn(Student[i], "\n")] = '\0';
    }

    // Sort names using qsort
    qsort(Student, n, sizeof(Student[0]), compareNames);

    // Display sorted names
    printf("\nSorted Names:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", Student[i]);
    }

    return 0;
}