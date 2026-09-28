#include<stdio.h>
int main()
{
    int day;
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);
    switch(day)
    {
            printf("Monday");
            break;
            printf("Tuesday");
            break;
            printf("Wednesday");
            break;
            printf("Thursday");
            break;
            printf("Friday");
            break;
            printf("Saturday");
            break;
            printf("Sunday");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.");
    }
    return 0;
}