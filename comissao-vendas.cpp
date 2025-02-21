/*
03comissãoVendas10perc.cpp

Descrição: Dado o total de vendas de um vendedor, calcule a sua comissão. Suponha que a comissão do vendedor seja de 10% do total de vendas.

Fonte: Silvio Do Lago Pereira. Algoritmos e Lógica de Programação em C – Uma Abordagem Didática (Portuguese Edition) (p. 24). Editora Érica | Saraiva. Edição do Kindle.

nível: elementar

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
