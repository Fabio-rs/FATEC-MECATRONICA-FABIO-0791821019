
#include <stdio.h>


void realizarSoma(){
float valor1, valor2, resultado;
printf("SOMA\n");
printf("Informe 2 operandos:");
scanf("%f%f", &valor1, &valor2);
resultado = valor1 + valor2;
printf("Resultado: %.3f\n", resultado);
}


void realizarSubtracao(){
float valor1, valor2, resultado;
printf("SUBTRACAO\n");
printf("Informe 2 operandos:");
scanf("%f%f", &valor1, &valor2);
resultado = valor1 - valor2;
printf("Resultado: %.3f\n", resultado);
}


void menu(){
printf("Nossa Calculadora!\n");
printf("1 - Soma\n");
printf("2 - Subtracao\n");
printf("3 - Multiplicacao\n");
printf("4 - Divisao\n");
printf("5 - Seno\n");
printf("0 - Sair\n");
printf("Sua Escolha:");
}


int main(void) {
int operacao;
int ligado = 0;
do{
ligado = 1;
menu();
scanf("%i", &operacao);


switch(operacao){
case 1: realizarSoma(); break;
case 2: realizarSubtracao(); break;
case 3:
printf("Multiplicacao\n");
break;
case 5:
printf("SEN\n");
break;
case 4:
printf("DIVISAO\n");
break;
case 0:
ligado = 0;
break;
default:
printf("Operacao Invalida!\n");
break;
}
}while(ligado != 0);


return 0;
}
