#include <stdio.h>

int main(){

	int num[10];
	int total, x, y, troca, temp;
	
//Pedir total de numeros para serem usados na tabela.	
	printf("Digite o numero total de numeros que deseja inserir na tabela(max de 10 numeros): ");
	scanf("%d", &total);
	
//Pedir numeros para serem usados na tabela.
	for(x=0;x<total;x++){
		printf("Digite um numero da posição [%d] da tabela: ", x+1);
		scanf("%d", &num[x]);
	}
//Bubble Sort (enquanto troca ter o valor 0 a troca continua), a partir do momento em que a condional não é mais atendida, sai do loop while.	
	troca = 0;
	while(troca==0){
		troca = 1;
		for(x=0;x<total-1;x++){
			if(num[x]>num[x+1]){
				temp = num[x];
				num[x] = num[x+1];
				num[x+1] = temp;
				troca = 0;
			}
		}
	}
//Apresentação dos valores ordenados.	
	for(x=0;x<total;x++){
		printf("posição %d: %d\n",x+1, num[x]);
	}
	
	return 0;
}
