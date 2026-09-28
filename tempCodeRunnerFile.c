#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    
    percentage = (s1 + s2 + s3 + s4 + s5) / 5.0;

    printf("Percentage = %.2f", percentage);

    if (percentage > 90) {
        printf("Grade = O\n");
    } else if (percentage >= 80) {
        printf("Grade = A\n");
    } else if (percentage >= 70) {
        printf("Grade = B\n");
    } else if (percentage >= 60) {
        printf("Grade = C\n");
    } else if (percentage >= 50) {
        printf("Grade = D\n");
    }else {
        printf("Grade = F\n");
    }
 return 0;
}