#include <stdio.h>

int main(){

	int num[10];
	int total, x, y, menor, temp;
	
//Pedir total de numeros para serem usados na tabela.	
	printf("Digite o numero total de numeros que deseja inserir na tabela(max de 10 numeros): ");
	scanf("%d", &total);
	
//Pedir numeros para serem usados na tabela.	
	for(x=0;x<total;x++){
		printf("Digite um numero da posição [%d] da tabela: ", x+1);
		scanf("%d", &num[x]);
	}
	
//Selection Sort.	
	for(x=0; x<total-1;x++){
		menor = x;
		for(y=x+1;y<total;y++){
			if(num[y]<num[menor]){
				menor = y;
			}	
		}
		if(menor != x){
		temp = num[x];
		num[x] = num[menor];
		num[menor] = temp;
		}
	}
	
//Exibir numeros organizados.	
	for(x=0;x<total;x++){
		printf("%d\n", num[x]);
	}
	
	return 0;
}
