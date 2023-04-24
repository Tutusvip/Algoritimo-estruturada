#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	char nome [3][10]; int i, nfunc = 0;
	for(i=0; i<3; i++){
		printf("digite o nome de funcionario (%d) \n", nfunc+1);
		gets(nome[i]);
	}
	printf("sequencial nome \n");
	for (i=0;i<3;i++){
		pritnf("%10d %s\n",i+1,nome[i]);
	}
}
