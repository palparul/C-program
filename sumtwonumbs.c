#include <stdio.h>

int main()
{
    int x,y,sum=0;
    
    printf("Enter the value of x and the value of y :\n");
    
    scanf("%d%d", &x, &y);
    
    sum = x + y;
    
    printf("Sum of the given integer value :\n %d",sum);

    return 0;
}
