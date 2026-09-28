#include<stdio.h>
int main() {
    int x, y, temp=0;
    printf("Enter the values of x and y: ");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}