/*
PROBLEMA 1.1
Dadas as duas notas de um aluno, calcule sua m�dia aritm�tica e informe a sua situa��o (aprovado ou reprovado),
levando em conta que a m�dia para aprova��o deve ser pelo menos 6,0.

Silvio Do Lago Pereira. Algoritmos e L�gica de Programa��o em C � Uma Abordagem Did�tica (Portuguese Edition) (p. 16).
Editora �rica | Saraiva. Edi��o do Kindle.
*/

#include <stdio.h>
#include <stdlib.h>

int media = 6;
float n1,n2;
float nfinal;


int main(){

        printf("N1: ");
        scanf("%f", &n1);
        while (n1<0 || n1>10)
            {
                system("cls");
                printf("ERRO: apenas valores entre 0 e 10.\n");
                printf("N1: ");
                scanf("%f", &n1);
            }

        printf("N2: ");
        scanf("%f",&n2);
        while (n2<0 || n2>10)
            {
                system("cls");
                printf("ERRO: apenas valores entre 0 e 10.\n");
                printf("N2: ");
                scanf("%f", &n2);
            }

        nfinal=(n1+n2)/2;
        printf("\nNota final: %.2f\n",nfinal);

        if (nfinal>=media)
        printf("Aprovado");
        else printf("Reprovado");

        printf("\n");
        system("pause");

        return 0;
}
