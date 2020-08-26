#include <stdio.h>

int main(void) {
  float A,B,X,y;
  printf("informe o valor de A,B e X:");
  scanf("%f%f%f" , &A, &B, &X);
  y = (A*X) + B;
  printf("resultado da equacao: %.3f\n" , y);

  return 0;
}
