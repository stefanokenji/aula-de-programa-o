#include <stdio.h>

int main (){
	int num;
	scanf ("%d", &num);
	
	for (int i; i>0; i++){
		i = num/10;
		scanf("%d \n", i);
		printf("numero de digitos = %d ", i);
	}
	
	return 0;
}
