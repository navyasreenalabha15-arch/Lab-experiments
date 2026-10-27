#include <stdio.h>

int main() {
    int units;
    float amount = 0.0;
    float surcharge = 0.0;
    float total_bill = 0.0;

    
    printf("Enter the total electricity units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input! Units consumed cannot be negative.\n");
        return 1;
    }

    
    if (units <= 50) {
        amount = units * 0.50;
    } 
    else if (units <= 150) {
        amount = (50 * 0.50) + ((units - 50) * 0.75);
    } 
    else if (units <= 250) {
        amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } 
    else {
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    
    surcharge = amount * 0.20;
    total_bill = amount + surcharge;

    
    printf("\n------------ ELECTRICITY BILL ------------\n");
    printf("Units Consumed:  %d\n", units);
    printf("Base Charges:    Rs. %.2f\n", amount);
    printf("Surcharge (20%%): Rs. %.2f\n", surcharge);
    printf("------------------------------------------\n");
    printf("Total Bill:      Rs. %.2f\n", total_bill);
    printf("------------------------------------------\n");

    return 0;
}
