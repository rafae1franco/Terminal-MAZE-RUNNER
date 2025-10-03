#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define TAM 5

// Labirinto fixo
char col[TAM][TAM] = {
    {'.', '.', '.', '#', '.'},
    {'.', '#', '.', '#', '.'},
    {'.', '#', '.', '.', '.'},
    {'.', '.', '.', '#', 'G'},
    {'.', '#', '.', '.', '.'}
};

// Função para imprimir o labirinto na tela
void imprimir_labirinto(int pos[2]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i == pos[0] && j == pos[1]) {
                printf("S  ");
            } else {
                printf("%c  ", col[i][j]);
            }
        }
        printf("\n");
    }
}

// Função para calcular a distância de Manhattan até o objetivo (3,4)
int calcular_distancia(int pos[2]) {
    return abs(pos[0] - 3) + abs(pos[1] - 4);
}

// Função para processar o input do usuário
// Atualiza as coordenadas do robô
void processar_movimento(char dir, int pos[2], int pos_ant[2]) {
    // Salva posição anterior
    pos_ant[0] = pos[0];
    pos_ant[1] = pos[1];

    switch (dir) {
        case 'W':
        case 'w':
            pos[0] -= 1;
            break;
        case 'S':
        case 's':
            pos[0] += 1;
            break;
        case 'A':
        case 'a':
            pos[1] -= 1;
            break;
        case 'D':
        case 'd':
            pos[1] += 1;
            break;
        default:
            break;
    }

    // Verifica validade do movimento
    if (pos[0] < 0 || pos[0] >= TAM || pos[1] < 0 || pos[1] >= TAM || col[pos[0]][pos[1]] == '#') {
        printf("\nMovimento inválido! Você bateu.\n");
        // Volta para posição anterior
        pos[0] = pos_ant[0];
        pos[1] = pos_ant[1];
    }
}

int main() {
    int pos[2] = {0, 0};     // posição atual do robô
    int pos_ant[2] = {0, 0}; // posição anterior
    char dir;

    while (true) {
        // Imprime labirinto
        imprimir_labirinto(pos);

        // Verifica se chegou no destino
        if (col[pos[0]][pos[1]] == 'G') {
            printf("\nVocê chegou no destino!!!\n");
            break;
        }

        // Mostra a distância até o objetivo
        int manh = calcular_distancia(pos);
        printf("\nDistância de Manhattan até o objetivo: %d\n", manh);

        // Pede direção ao usuário
        printf("Digite a direção (WASD) ou Q para sair: ");
        scanf(" %c", &dir);

        // Caso queira sair
        if (dir == 'Q' || dir == 'q') {
            printf("\nSaindo do jogo...\n");
            break;
        }

        // Processa movimento
        processar_movimento(dir, pos, pos_ant);

        printf("-------------------------------------\n");
    }

    return 0;
}
