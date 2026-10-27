#include <stdio.h>

int main() {
    int choice;
    float temperature, converted;

    
    printf("==========================================\n");
    printf("        TEMPERATURE CONVERTER SYSTEM      \n");
    printf("==========================================\n");
    printf("1. Convert Fahrenheit to Celsius\n");
    printf("2. Convert Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    
    if (choice == 1) {
        
        printf("\nEnter temperature in Fahrenheit (°F): ");
        scanf("%f", &temperature);
        
        
        converted = (temperature - 32.0) * 5.0 / 9.0;
        
        printf("\nResult: %.2f°F is equivalent to %.2f°C\n", temperature, converted);
    } 
    else if (choice == 2) {
        
        printf("\nEnter temperature in Celsius (°C): ");
        scanf("%f", &temperature);
        
        
        converted = (temperature * 9.0 / 5.0) + 32.0;
        
        printf("\nResult: %.2f°C is equivalent to %.2f°F\n", temperature, converted);
    } 
    else {
        
        printf("\nError: Invalid choice! Please restart the program and enter 1 or 2.\n");
    }

    printf("==========================================\n");
    return 0;
}
