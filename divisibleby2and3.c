#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0)
        printf("Divisible by both");
    else
        printf("Not divisible by both");

    return 0;
}