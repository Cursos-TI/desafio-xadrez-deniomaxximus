#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void recursivoTorre(int n){
    if(n > 0){
        recursivoTorre(n-1);
        printf("Direita\n");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoBispo = 5, movimentoTorre = 5, movimentoRainha = 8, movimentoCavalo = 1;
    // Implementação de Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    while (movimentoBispo >= 1){
        printf("Cima, direita\n");
        movimentoBispo--;
    }
    
    // Implementação de Movimentação da Torre
    printf("\nMovimento da Torre\n");
    recursivoTorre(movimentoTorre);

    /*for(movimentoTorre = 1;movimentoTorre<=5;movimentoTorre++){
        printf("Direita\n");
    }*/

    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha\n");
    do{
        printf("Esquerda\n");
        movimentoRainha--;
    }while(movimentoRainha>0);

    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimento do Cavalo\n");
    while (movimentoCavalo > 0)
    {
        for(int movimentoCavalo2 = 2; movimentoCavalo2 > 0; movimentoCavalo2--){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        movimentoCavalo--;
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
