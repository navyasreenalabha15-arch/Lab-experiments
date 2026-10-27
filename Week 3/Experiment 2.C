#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

  
    
    amount = principal * pow((1 + rate / 100), time);
    
    
    compound_interest = amount - principal;

    
    printf("\nTotal Accumulated Amount: %.2lf\n", amount);
    printf("Calculated Compound Interest: %.2lf\n", compound_interest);

    return 0;
}
