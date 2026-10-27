#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    
    printf("Enter a number to find its square root: ");
    if (scanf("%lf", &number) != 1) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    
    if (number < 0) {
        printf("Error! Square root of a negative number yields an imaginary result.\n");
    } else {
        
        result = sqrt(number);
        
        
        printf("The square root of %.2f is %.2f\n", number, result);
    }

    return 0;
}
