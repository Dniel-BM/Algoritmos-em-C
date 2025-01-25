/* 
    Algoritmos-em-C:
    made by:  https://github.com/Dniel-BM
    
    Essa biblioteca é produto de estudo e pesquisa pessoal da linguagem C, pode ser acessada em:
    https://github.com/Dniel-BM/Algoritmos-em-C  
    
    02_tabulador.cpp
    Definido operação aritmética e valor pelo usuário, o algoritmo retornará a tabuada de 1 a 10 correspondente a escolha do usuário.
    nivel: elementar
*/

#include <stdio.h>
#include <math.h>

double adicao (double a, int b) {return a+b;}
double subtracao (double a, int b) {return a-b;}
double produto (double a, int b) {return a*b;}
double divisao (double a, int b) {return a/b;}
double potenciacao (double a, int b) {return pow(a,b);}

int main (){
    double num;
    double resultado;
    int i;
    char op;

    printf("|TABULADOR|");
    printf("Escolha o operador:\nUtilize: '+' '-' '*' '/'\nPara potencias utilize 'p'\noperador: ");
    op=getchar();

    printf("\nnum: ");
    scanf("%lf", &num);



    for(i=0;i<=10;i++){
    switch (op)
        {
            case '+': resultado = adicao (num,i); break;
            case '-': resultado = subtracao (num,i); break;
            case '*': resultado = produto (num,i); break;
            case '/': resultado = divisao (num,i); break;
            case 'p': resultado = potenciacao (num,i); break;
            default: resultado = produto(num,i);
        }
    printf("\n%.2lf %c %d = %.2lf", num, op, i, resultado);
    }
    printf("\n");

}


