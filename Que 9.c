#include <stdio.h>

void binary(int num)
{
    int binNum[32], i;

    if (num == 0)
    {
        return;
    }

    while (num > 0)
    {
        binNum[i++] = num & 1;
        num >>= 1;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binNum[j]);
    }
}

void octal(int num)
{
    if (num == 0)
    {
        return;
    }
    octal(num / 8);
    printf("%d", num % 8);
}

void hexdec(int num)
{
    if (num == 0)
    {
        return;
    }
    hexdec(num / 16);
    int remainder = num % 16;
    if (remainder < 10)
    {
        printf("%d", remainder);
    }
    else
    {
        printf("%c", remainder - 10 + 'A');
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Binary: 0");
        printf("Octal: 0");
        printf("Hexadecimal: 0");

        return 0;
    }

    printf("Binary equivalent: ");
    binary(num);
    printf("\n");

    printf("Octal equivalent: ");
    octal(num);
    printf("\n");

    printf("Hexadecimal equivalent: ");
    hexdec(num);
    printf("\n");

    return 0;
}