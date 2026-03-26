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

void recursivoRainha(int n){
    if(n > 0){
        recursivoRainha(n-1);
        printf("Esquerda\n");
    }
}

void recursivoBispo(int n){
    if(n > 0){
        recursivoBispo(n-1);
        printf("Cima, ");
        while (n > 0){
            printf(" Esquerda\n");
            break;
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoBispo = 5, movimentoTorre = 5, movimentoRainha = 8;
    // Implementação de Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    recursivoBispo(movimentoBispo);
    
    // Implementação de Movimentação da Torre
    printf("\nMovimento da Torre\n");
    recursivoTorre(movimentoTorre);


    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha\n");
    recursivoRainha(movimentoRainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimento do Cavalo\n");
    for (int movCavalo1 = 2; movCavalo1 > 0 ; movCavalo1--)
    {
        /* code */
        printf("Cima\n");
        for(int movCavalo2 = 1;movCavalo1 == 1 && movCavalo2>0;movCavalo2--){
            printf("Direita\n");
        }
    }
    
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
