/*
03comiss�oVendas10perc.cpp

Descri��o: Dado o total de vendas de um vendedor, calcule a sua comiss�o. Suponha que a comiss�o do vendedor seja de 10% do total de vendas.

Fonte: Silvio Do Lago Pereira. Algoritmos e L�gica de Programa��o em C � Uma Abordagem Did�tica (Portuguese Edition) (p. 24). Editora �rica | Saraiva. Edi��o do Kindle.

n�vel: elementar

*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float tvendas, comissao;

    printf("Digite\nTotal de vendas: R$ ");
    scanf("%f", &tvendas);

    comissao=tvendas/10;

    printf("\nComissao: R$ %.2f", comissao);

}
