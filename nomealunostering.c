#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	char nomeAluno[51];
	printf("Digite o nome do aluno =\n");
	gets(nomeAluno);
	pritnf("nome do aluno lido=%s\n", nomeAluno);
	getch();
}
