#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c, delta, x1, x2;
 
   
    scanf("%lf %lf %lf", &a, &b, &c);
 
    delta = b * b - 4 * a * c;
 
    if (delta > 0) {
        printf("RAIZES DISTINTAS\n");
 
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
 
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    } else if (delta == 0) {
        printf("RAIZ UNICA\n");
 
        x1 = -b / (2 * a);
 
        printf("X1 = %.2lf\n", x1);
    } else {
        printf("RAIZES IMAGINARIAS\n");
    }
 
    return 0;
}