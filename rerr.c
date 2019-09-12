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



double mult1(int n) {
    double numerator = 1;
    double result = numerator / fact(n+1);
    printf("result in mult1 is: %f\n", result);
    return result;
}

double mult2(int n) {

    double intermediate, denominator = 2;
    intermediate = M_LN2 / denominator;
    double result = pow(intermediate, n+1);
    printf("result in mult2: %f\n", result);
    return result;

}

int main() {

    double piece1, piece2;
    
    for (int i = 1; i < 16; i++) {
        piece1 = mult1(i);
        piece2 = mult2(i);
        //printf("Piece1: %.10f, \npiece2: %.10f\n", piece1, piece2);
        printf("%d : %.10f\n", i, piece1 * piece2);
    }     
    return 0;
}
