#include<stdio.h>
int main(){

	int line, column, mat[3][3];
	
	//estrutura de repetição para a toda a matriz 	
	for(line=0; line<3; line++){
		for(column = 0; column<3; column++){			
			printf("elemento [%d][%d]: ",line,column);
			scanf("%d",&mat[line][column]);
		}
		printf("\n");
	}
	
	//valores originais
	printf("Elementos Originais \n \n");
	for(line=0; line<3; line++){
		for(column = 0; column<3; column++){
			printf("%d ",mat[line][column]);
		}
		printf("\n");
	}
	printf("\n");
	
	//Valores multiplicados
	printf("Elementos multiplicados por 5 \n \n");
	for(line=0; line<3; line++){
		for(column = 0; column<3; column++){
			mat[line][column] = mat[line][column]*5;
			printf("%d ", mat[line][column]);
		}
		printf("\n");
	}
return 0;
}
