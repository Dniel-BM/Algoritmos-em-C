/*
04_medidaSala.cpp

Descricao:Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua área em metros quadrados.

Fonte: Silvio Do Lago Pereira. Algoritmos e Logica de Programacao em C – Uma Abordagem Didatica (Portuguese Edition) (p. 24). Editora Erica | Saraiva. Edicao do Kindle.

nivel: elementar.
*/


#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float larg, comp, area;

    printf("Largura: ");
    scanf("%f", &larg);

    printf("Comprimento: /n");
    scanf("%f", &comp);

    area = comp*larg;
    printf("Area da sala: %.2f metros quadrados\n\n\n", area);

    system("pause");
    return 0;
}
