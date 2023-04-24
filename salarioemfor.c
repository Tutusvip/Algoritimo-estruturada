#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int cont;
	float salario[5], desconto[5], maiorSalario, mediaSalario;
	setlocale(LC_ALL, "Portuguese");
	
	system("color e5");
	for(cont=0; cont<5; cont++){
		printf("Informe o salário recebido: ");
		scanf("%f", &salario[cont]);
	}
	for(cont=0; cont<5; cont++){
		desconto[cont] = salario[cont] / 0.11;
	}
	printf("A lista de salários: \n%.2f", salario[cont]);
	
	return 0;
}
