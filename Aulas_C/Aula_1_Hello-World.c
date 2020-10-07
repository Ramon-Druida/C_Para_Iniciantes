/***********************************************************************
*                                                                      *
*              Autor: Ramon Moreira.                                   *
*                                                                      *
*      Esse código pode ser baixado, modificado e compartilhado        *
*      com o intuito educativo.                                        *
*                                                                      *
*      Contato: ramonalexander20@gmail.com                             *
*                                                                      *
* *********************************************************************/



// Primeira informação importante são os comentários:

// Ultilizando caractere barra 2 vezes cria-se o comentário de 1 linha. 

/*
    Segundo são os comentários de várias linhas:

    Barra asterisco  abre o comentário de várias linhas.

    Asterisco barra fecha o comentário de várias linhas.
*/

/*
    Os comentários são úteis para explicar partes do código ou para informar 
    a outras pessoas que possam vir a ler detalhes que facilitem a compreensão. 


    Por exemplo:
*/

//  #include é um comando para incluir uma biblioteca.

/*
  As bibliotecas facilitam a programação, pois alguém anteriormente criou 
  linhas de códigos, e usamos esses códigos já prontos para agilizar e facilitar o 
  entendimento.

*/

// Inclui a biblioteca padrão de c, entrada e saída de dados.
#include<stdio.h>


// int é a abreviação de inteiro, que é conjunto dos números reais.

/*  
    Todo programa em c tem uma função principal, chamada de main é onde 
    escrevemos parte do nosso código que deve estar dentro de chaves {  }.
*/

int main(){

    /* 
        Outro detalhe importante é a identação, que nada mais é do que uma 
        quantidade de espaços que organizam o código para ficar mais legível
        esse tópico pode ser verificado no repositório de Lógica de programação.

    */

   // printf() é uma função da biblioteca <stdio.h> que imprime informações no terminal.
   
   /* 
        para testarmos essa função, vamos usar a frase Hello Word, que normalmente é a primeira frase que usamos ao aprender uma nova linguagem.
   */

    printf("Hello World");

    // o return 0 ao final do programa, retorna o valor 0 para função, indicativo que occoreu tudo bem.
    return 0;

}// Fim do main()
