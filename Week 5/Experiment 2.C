#include <stdio.h>

int main() {
    float units, bill_amount = 0.0;


    printf("Enter the total units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input. Units consumed cannot be negative.\n");
        return 1;
    }

     
    if (units <= 100) {
        bill_amount = units * 1.50;
    } 
    else if (units <= 200) {
        bill_amount = units * 2.50;
    } 
    else if (units <= 500) {
        bill_amount = units * 4.00;
    } 
    else {
        bill_amount = units * 6.00;
    }

    
    printf("Total Bill Amount: ₹ %.2f\n", bill_amount);

    return 0;
}
