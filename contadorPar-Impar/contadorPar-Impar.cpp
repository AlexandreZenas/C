#include <stdio.h>

int main(){
	int A, B, quantidadePar;
	
	printf("Informe o valor inicial: ");
	scanf("%d", &A);
	printf("Informe o valor final: ");
	scanf("%d", &B);
	
	for(A, B; A <= B; A=A+2, quantidadePar++){
		if(A % 2 == 0){
			printf(" %d, numero par. \n", A);
			
		}else if (A % 2 != 0){
			printf( "%d, numero impar. \n", A);
		}
	}
	if(A % 2 == 0){
		printf("Numero pares encontrados: %d. \n", quantidadePar);
	}else if (A % 2 != 0){
		printf("Numeros pares encontrados: 0");
	}
}
