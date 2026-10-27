#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    
    printf("Enter three integers separated by spaces: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    /* 
     * Logic using Nested Conditional (Ternary) Operator:
     * If (num1 > num2) is true, evaluate ((num1 > num3) ? num1 : num3)
     * If (num1 > num2) is false, evaluate ((num2 > num3) ? num2 : num3)
     */
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    
    printf("The maximum number among %d, %d, and %d is: %d\n", num1, num2, num3, max);

    return 0;
}
