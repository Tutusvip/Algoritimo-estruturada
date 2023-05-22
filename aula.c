/* cod1)#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 

main(){
	system("color 5e");
	int k;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número: ");
	scanf("%d", &k);
	printf("Valor digitado %d \n", k);
	printf("O endereço de k = %x ", &k);
	
}

cod2)#include <stdio.h>
#include <locale.h>
int main(){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	char matriz[10] = "palavra";
	
	printf("Tamanho de um int short é: %d bytes\n", sizeof(short int));
	printf("Tamanho de um int long é: %d bytes\n", sizeof(long int));
	printf("Tamanho de um char é: %d bytes\n", sizeof(char));
	printf("Tamanho de um vetor de char com 10 posições é: %d bytes\n", sizeof(matriz));
}

cod3)#include <stdio.h>

int main(){
char letra='E';
int numero=35;
char matriz[20]="estruturaDeDados";
float numeroDecimal = 87.8;
printf("Endereço de memória das variáveis\n\n");
printf("O valor da variável letra é %c e seu endereço é %x\n",letra,&letra);
printf("O valor da variável numero é %d e seu endereço é %x\n",numero,&numero);
printf("O valor da variável metriz é %s e seu endereço é %x\n",matriz,matriz);
printf("O valor da variável numeroDecimal é %2.1f e seu endereço é %x\n",numeroDecimal,&numeroDecimal);



faça um programa que receba como dados de 2 numeros e execute as 4 operações aritimiceitcas usando ponteiroes*/


cod4) #include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	system("color 5e");
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	int *p1,*p2;
	
	printf("Digite os Dados");
	scanf("%d",&n1);
	printf("Digite os Dados");
	scanf("%d",&n2);
	
	p1=&n1;
	p2=&n2;



	printf("subi = %d\n", *p1 - * p2);
	printf("soma = %d\n", *p1 + * p2);
	printf("Divi = %d\n", *p1 / * p2);
	printf("Mult = %d\n", (*p1) * (*p2));
		
	return(0);
}
