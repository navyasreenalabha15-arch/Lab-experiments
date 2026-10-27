#include <stdio.h>

int main() {
    
    int A = 2, B = 3, C = 4, D = 5, E = 6, F = 7, G = 8;
    int i = 5;
    
    
    int res_a;
    float res_b;
    int res_c;
    int J;

    
    res_a = A + B * C + (D * E) + F * G;

    
  
    
    res_b = (float)A / B * C - B + (float)A * D / 3;

    
    int tempA = A, tempB = B; // Storing copies to evaluate safely without permanent side-effects
    res_c = tempA++ + tempB-- - tempA;

    
    
    
    int tempI = i;
    J = (tempI++) + (++tempI);

    
    printf("--- Expression Evaluation Results ---\n");
    printf("a. A + B * C + (D * E) + F * G = %d\n", res_a);
    printf("b. A / B * C - B + A * D / 3   = %.2f\n", res_b);
    printf("c. A+++B---A                   = %d\n", res_c);
    printf("d. J = (i++) + (++i)           = %d (Final i = %d)\n", J, tempI);

    return 0;
}
