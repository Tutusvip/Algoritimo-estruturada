/*
faça um programa que receba como dado de entrada o (salario) de uma passoa e o seu (tempo de serviço) e mostre como resultado o (salario final) onde: 
tempo > 5 anos 
bonus de 10%
caso o salario final seja > 1800
descontar inss de 11%
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float salario, total;
	int tempo;
	system("color f4");
	
	printf("Digite o tempó do serviço: ");
	scanf("%d", &tempo);
	
	printf("Digite o salario atual: ");
	scanf("%f", &salario);
	
	if(tempo >=5){
	total= salario+salario*0.1;
		
} 
	if(total >=1800){
		total = salario-salario*0.11;
		printf("salario atual %0.2f", total);
	}

	return(0);
}
