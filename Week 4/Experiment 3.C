#include <stdio.h>

int main() {
    
    int sub1, sub2, sub3, sub4, sub5;
    int total;
    
    
    float average;

    
    printf("Enter marks of 5 subjects (as integers separate by spaces): \n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    
    total = sub1 + sub2 + sub3 + sub4 + sub5;

    
    
    average = (float)total / 5;

    
    printf("\nTotal Marks   = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
