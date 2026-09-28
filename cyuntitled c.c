#include <stdio.h>
int main()
 {
    int x=5, y=10;
    printf("%d %d %d \n", x, x++, ++x);
    printf("%d %d %d \n", y, ++y, y++);
    return 0;
}