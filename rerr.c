#include <math.h>
#include <stdio.h>
#include <stdlib.h>


#ifndef M_LN2
#define M_LN2  0.693147180559945309417232121458176568
#endif


int fact(int n) {
  if (n <= 1) return 1;
  return n*fact(n-1);
}



double term1(int n) {
    double numerator = 2;
    return numerator/fact(n+1);
}

double term2(int n) {

    double intermediate, denominator = 2;
    intermediate = M_LN2 / denominator;
    return pow(intermediate, n+1);

}

int main() {

    double piece1, piece2;
    
    for (int i = 1; i < 16; i++) {
        piece1 = term1(i);
        piece2 = term2(i);
        printf("Piece1: %.10f, \npiece2: %.10f\n", piece1, piece2);
        printf("%d : %.10f\n", i, piece1 * piece2);
    }     
    return 0;
}
