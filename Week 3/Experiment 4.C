#include <stdio.h>

int main() {
    float u, a, t, s;

  
    printf("Enter initial velocity (u): ");
    scanf("%f", &u);

    printf("Enter acceleration (a): ");
    scanf("%f", &a);

    printf("Enter time (t): ");
    scanf("%f", &t);

    
    s = (u * t) + (0.5 * a * t * t);

    
    printf("Distance travelled by the object = %.2f\n", s);

    return 0;
}
