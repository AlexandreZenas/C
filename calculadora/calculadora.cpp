#include <stdio.h>

int main(){
	int A, B, add, sub, multi, divi;
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &A);
	printf("Informe o segundo valor: ");
	scanf("%d", &B);
	
	add = A + B;
	sub = A - B;
	multi = A * B; 
	divi = A / B;
	
	printf("Resultado:\n");
	printf("Addition: %d. \n", add);
	printf("Subtraction: %d. \n",sub);
	printf("Multiplication: %d. \n",multi);
	printf("Division: %d. \n", divi);
}