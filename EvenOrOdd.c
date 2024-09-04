#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num % 2 == 0)
    printf("It's an Even number.\n",num);
    else
    printf("It's an Odd number.\n",num);
    return 0;
}
