#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    percentage = (s1 + s2 + s3 + s4 + s5) / 5.0;

    printf("Percentage = %.2f", percentage);

    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}