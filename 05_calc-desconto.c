#include <stdio.h>
/*
 05_calc-desconto
Dados o valor da compra e o percentual de desconto, calcule a ser pago.
Considere que o percentual de desconto e um numero real entre 0 e 1

Fonte: Silvio Do Lago Pereira. Algoritmos e Logica de Programacao em C – Uma Abordagem Didatica (Portuguese Edition) (p. 24). Editora Erica | Saraiva. Edicao do Kindle.

nível: elementar

*/

int main()
{
	
	float produto;
	char confirma;
	float perDesconto;
	float valorDesconto;
	float valorAvista;
	
	printf("Preco do produto: ");
    scanf("%f", &produto);
	printf("O Preco do produto informado é R$%.2f \nConfirma o valor (y) ou (n)?\n", produto);
	scanf(" %c",&confirma);
	//verifficar simbolo estranho ├® na saida do terminal
	while (confirma != 'y')
	{
		printf("Insira o valor correto: \n");
		printf("Preco do produto: ");
		scanf("%f", &produto);
		printf("O Preco do produto informado é %.2f \nConfirma o valor (y) ou (n)?\n", produto);
		scanf(" %c", &confirma);
	}

	printf("| ! | Insira o percentual de desconto, utilizando valores entre 0 e 1 | ! |\nPercentual de desconto:  ");
	scanf("%f", &perDesconto);

	valorDesconto = produto * perDesconto;
	printf("\nA vista desconto de: %.2f\n", valorDesconto);


	valorAvista = produto - valorDesconto;
	printf("O valor a vista com desconto e %.2f", valorAvista);
	
	return 0;
}
