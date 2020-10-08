
/*

    Ao longo do estudo percebemos que a forma de escrever o código segue algumas predefinições,
    o código possui duas formas de escrita, as sentenças simples e sentenças compostas:
****************************************************************************************

    Sentença simples:    int Numero_pi = 3.14; 

****************************************************************************************

    Sentença composta:	int  função ( ){

			            char letra = ‘ A ‘;

			            }
***************************************************************************************

    Normalmente ao fim de cada sentença simples existe um ponto e virgula, que não deve ser esquecido, pois é o principal erro entre os programadores que usam determinadas linguagens de programação no qual é necessário esse uso.

    existem sentenças simples dentro de sentenças compostas e tambem sentenças compostas detro de outras sentenças compostas, pode parecer confuso mas se prestar atenção no código de exemplo vai perceber que é algo simples.
*/



/*
    As variáveis podem ser declaradas em qualquer parte do código, mas existe uma pequena diferença chamada de escopo , que é a acessibilidade da variável em diferentes partes do programa: variável global e variável local, a variável global pode ser acessada em qualquer parte do programa, já a local só pode ser usada onde foi declarada.

    o escopo tambem vale 

*/

// Mas o que é a variavel?

/*
    É um espaço de memória dedicado a armazenar informações, essas informações são classificadas basicamente em: booleanos, inteiros, racionais e caracteres, também existe subdivisões dessas classificações que serão exemplificadas abaixo.
*/


// Declaração da biblioteca de entrada e saida.
#include<stdio.h>


/*
    Nomes de variáveis, os nomes atribuidos as variáves devem obedecer uma regra simples,
    não deve ter espaços ou caracteres especiais e não deve começar com números nem conter acentuação.

    Exemplo:

       Certo        *       Errado
                    *
    numero          *      número
    meuNome         *      meu Nome
    Duas_Pessoas    *      2_pessoas
    Pessoas_2       *      pessoas-2
                    *      @
                    *      #
                    *      $


*/      

/***********************************************************************************
 *                          VARIÁVEIS GLOBAIS
***********************************************************************************/
// Armazena um número inteiro negativo
int inteiro_Negativo = -1;

// Armazena um número inteiro positivo
int inteiro_Positivo = 100;

// Um detralhe importante, na programação usamos o ponto para numeros racionais,
// e a virgula para separar parametros, por exemplo 1 declaração com 2 variáveis.
float racional_Negativo = -0.32, racional_Positivo = 3.14;

// a forma de declarar caracteres é bem simples, basta declarar com aspas simples '@' 
char caractere1 = '@';

char caractere2 = '!', caractere3 = 'A', caractere4 = '$';

/***********************************************************************************/
int main (){


    /***********************************************************************************
     *                      VARIÁVEIS LOCAIS
    ***********************************************************************************/
    int numero = -273;

    // Para imprimir variáveis usamos referencias:
    // %i para inteiros
    // %f para racionais
    // %c para caracteres

    // Para isso abrimos as aspas duplas colocamos a referencia e apos aspas
    //  usamos uma VIRGULA e depois a variável.

    printf(" %i  ", inteiro_Negativo);

    
    // Podemos escrever frases e usarmos referencias em conjunto
    printf(" Numero inteiro: %i ", inteiro_Positivo);

    // Para usar acentuação nas palavras é necessário o uso de uma biblioteca, 
    //que é assunto para outra aula
    
    printf(" %f ", racional_Negativo);

    printf("  Numero racional positivo: %f ", racional_Positivo );

    // Podemos imprimir variaves sozinhas:
    printf(" %c ", caractere1);

    // ou vários juntos, respeitando a ordem de referenciação.

    printf(" %c  %c  %c   %i", caractere2, caractere3, caractere4, numero);


    return 0;

}// FIM do programa
