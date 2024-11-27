#include <stdio.h>

int main(){

	int num[10];
	int total, x, y, temp;
	
//Pedir total de numeros para serem usados na tabela.	
	printf("Digite o numero total de numeros que deseja inserir na tabela(max de 10 numeros): ");
	scanf("%d", &total);
	
//Pedir numeros para serem usados na tabela	
	for(x=0;x<total;x++){
		printf("Digite um numero da posição [%d] da tabela: ", x+1);
		scanf("%d", &num[x]);
	}
	
//Insertion Sort(usa a primeira posição em 1 e não 0 comparado as outros métodos de Sort).	
	for(x=1;x<total;x++){
		temp = num[x];
		y = x-1;
		while((y>=0) && (temp < num[y])){
			num[y+1] = num[y];
			y = y-1;
		}
		num[y+1] = temp;
	}
	
//Exibir valores em ordem.
	for(x=0;x<total;x++){
		printf("%d\n", num[x]);
	}
}
