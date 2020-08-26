#include <stdio.h>

int main(void) {
   float A,B,X;
   printf("informe um valor para B e para A:" );
   scanf("%f%f" ,&B, &A);
   X = -B/A;
   printf("valor de X: %.2f\n" , X);


  return 0;
}
