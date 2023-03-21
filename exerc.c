#include <stdio.h>

int main() {
	
	int numAluno;
	char nomeAluno[30];
	
	float notaA;
	float notaB;
	float notaC;
	
	printf("Digite o numero do aluno: ");
	scanf("%d", &numAluno);
	
	printf("Digite o nome do aluno: ");
	scanf("%s", &nomeAluno);
	
	printf("Digite a nota 1: ");
	scanf("%f", &notaA);
	
	printf("Digite a nota 2: ");
	scanf("%f", &notaB);
	
	printf("Digite a nota 3: ");
	scanf("%f", &notaC);
	
	float medE = (notaA + notaB + notaC)/3;
	
	float medT = (notaA + (notaB * 2) + (notaC * 3) + medE) / 7;
	
	printf("\n");
	
	if(medT >= 9){
		printf("Conceito: A - APROVADO! \n");
	}
	if(medT >= 7.5 && medT < 9){
		printf("Conceito: B - APROVADO! \n");
	}
	if(medT >= 6.5 && medT < 7.5){
		printf("Conceito: C - APROVADO! \n");
	}	
	if(medT >= 4 && medT < 6.5){
		printf("Conceito: D - REPROVADO! \n");
	}
	if(medT < 4){
		printf("Conceito: E - REPROVADO! \n");
	}
	
	printf("\n");
	
	printf("Numero do aluno: %d \n", numAluno);
	printf("Aluno: %s \n", nomeAluno);
	printf("\n");
	printf("As notas sao: 1 = %f, 2 = %f, 3 = %f \n", notaA, notaB, notaC);
	printf("Media exercicios: %f \n", medE);
	printf("Media total: %f", medT);
	
}
