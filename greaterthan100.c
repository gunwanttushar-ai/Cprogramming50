#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n > 100)
        printf("Greater than 100");
    else
        printf("100 or less");

    return 0;
}