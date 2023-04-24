#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float salario[5];
	float inss[5];
	float maior;
	float md;
	int cont;
	setlocale(LC_ALL, "Portuguese");
	
	for(cont=0; cont<5; cont++){
		printf("Digite o salario"); scanf("d%", &salario[cont]);
		inss[cont]=salario[cont]*0.11;
		if(salario[cont]> maior){
			maior = salario[cont];
		}
	md+=inss[cont];
	}
	printf("\n Lista de salario e descontos");	
	for(cont=0; cont<5; cont++){
		printf("Digite o salario %0.2f inss %0.2f", salario[cont], inss[cont]); 
}
	pritnf("\n Maior salario %0.2f", maior);
	pritnf("\n Media de desconto %0.2f", md/5);
	return 0;
}
