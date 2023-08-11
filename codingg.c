#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i;
    printf("Enter a 3-digit number: ");
    scanf("%d", &a); // Corrected: Added '&' before 'a' to read input correctly
    i=a;
    c = a % 10;
    d = c * c * c;
    a /= 10; // Corrected: Use /= instead of just a/10;
    
    e = a % 10;
    g = e * e * e;
    a /= 10; // Corrected: Use /= instead of just a/10;
    
    f = a % 10;
    h = f * f * f;
    
    if ((d + g + h )== i) { // Corrected: Compare with original 'a', not just sum
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}

