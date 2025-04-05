#include <stdio.h>
/*
06_dolarToReal

Dados um valor em real e a cotação do dólar, converta esse valor em dólares.

nivel: elementar

Fonte:
Silvio Do Lago Pereira. Algoritmos e Lógica de Programação em C – Uma Abordagem Didática (Portuguese Edition) (p. 24). Editora Érica | Saraiva. Edição do Kindle.

link: https://github.com/Dniel-BM/Algoritmos-em-C/blob/main/06_dolarToReal.c
 */

int main(){
	float real;
	float dolar;
	float conversao;

    printf("Digite a cotacao atual do dolar: ");
    scanf("%f", &dolar);

    printf("Digite o saldo em Real: ");
    scanf("%f", &real);

	conversao = real / dolar;
	printf("O saldo convertido para dolar e: %.2f", conversao);
	
	return 0;
}
