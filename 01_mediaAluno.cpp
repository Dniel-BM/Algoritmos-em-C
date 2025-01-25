/*
        Algoritmos-em-C:
        made by:  https://github.com/Dniel-BM
            
        Essa biblioteca é produto de estudo e pesquisa pessoal da linguagem C, pode ser acessada em:
        https://github.com/Dniel-BM/Algoritmos-em-C  
         01_mediaAlauno
        Algorítmo é citado no livro Algorítmos e Lógica de Programação em C de Silvio do Lago Pereira (pg 15)
                
        PROBLEMA 1.1
        Dadas as duas notas de um aluno, calcule sua média aritmética e informe a sua situação (aprovado ou reprovado),
        levando em conta que a média para aprovação deve ser pelo menos 6,0.
                
        Silvio Do Lago Pereira. Algoritmos e Lógica de Programação em C – Uma Abordagem Didática (Portuguese Edition) (p. 16).
        Editora Érica | Saraiva. Edição do Kindle.
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
