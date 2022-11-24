#include <stdio.h>

int main(){
	int n1, n2, res, termo;
	
	n1 = 0;
	n2 = 1;
	res = n1 + n2; 
	termo = 1;
	
	while( termo <= 30){
	printf("termo %d: %i \n", termo, res);
	    // repetição da equação
		n1 = n2; 
	    n2 = res;
	    res = n1 + n2;
    	//repetição da linha
	    termo++;
	}
}
