#include<stdio.h>
int main()
{ 
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(x>0)
    {
        printf("The x=%d is positive",x);
    }
    else if(x<0)
    {
        printf("The x=%d is negative",x);
    }
    else
    {
        printf("The x=%d is zero",x);
    }
    return 0;
}