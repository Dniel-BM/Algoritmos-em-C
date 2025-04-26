#include <stdio.h>

/*
07_ReajustePercentualSalarial.c

fonte: Ex. 1.4 (Algoritmos e Logica de programacao em C - Silvio do Lago)

Descrição:Dados um salario e um percentual de reajuste, calcule o salario reajustado.
Considere que o percentual de reajuste e dado por um numero real entre 0 e 1.
Por exemplo, se o reajuste for de 15%, o suario deve digitar o numero 0.15.

nível: elementar
*/


int main(){
	float salario;
	printf("Digite salario: ");
	scanf("%f", &salario);
	
	float percentual;
	printf("\nInsira percentual de reajuste: \n[Use valores entre 0 e 1]");
	scanf("%f", &percentual);
	
	float reajuste;
	reajuste = percentual * salario;
	printf("O reajuste e: %.2f", reajuste);
	
	float salarioAtual;
	salarioAtual = salario + reajuste;
	printf("\nSalario atualizado: %.2f", salarioAtual);

    return 0;
		
}

