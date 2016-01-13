#include "T112_HW02_1.h"

int main()
{
    int num;
    int result;

    printf("Please input an integer: ");
    scanf("%d", &num);
    
    result = longest_digit_run(num);
    printf("The longest digit run is: %d\n", result);
    
 
    return 0;
}

