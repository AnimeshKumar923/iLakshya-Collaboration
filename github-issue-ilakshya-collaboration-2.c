// Write a program to print the number of days by entering a month

#include <stdio.h>
#include <string.h>

int main()
{
    int month;

    printf("enter a month in number format: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("number of days in January = 31");
        break;

    case 2:
        printf("number of days in February = 28");
        break;

    case 3:
        printf("number of days in March = 31");
        break;

    case 4:
        printf("number of days in April = 30");
        break;

    case 5:
        printf("number of days in May = 31");
        break;

    case 6:
        printf("number of days in June = 30");
        break;

    case 7:
        printf("number of days in July = 31");
        break;

    case 8:
        printf("number of days in August = 31");
        break;

    case 9:
        printf("number of days in September = 30");
        break;

    case 10:
        printf("number of days in October = 31");
        break;

    case 11:
        printf("number of days in November = 30");
        break;

    case 12:
        printf("number of days in December = 31");
        break;

    default:
        printf("invalid input");
        break;

        return 0;
    }
}