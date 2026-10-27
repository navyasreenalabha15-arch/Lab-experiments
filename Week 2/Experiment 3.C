#include <stdio.h>

int main() {
    
    float principal, rate, time, simple_interest;

  
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

  
    simple_interest = (principal * rate * time) / 100.0;

    printf("\n--- Calculation Summary ---\n");
    printf("Principal Amount :  $%.2f\n", principal);
    printf("Rate of Interest :  %.2f%%\n", rate);
    printf("Time Period      :  %.2f years\n", time);
    printf("---------------------------\n");
    printf("Simple Interest  :  $%.2f\n", simple_interest);
    printf("Total Maturity Value: $%.2f\n", principal + simple_interest);

    return 0;
}
