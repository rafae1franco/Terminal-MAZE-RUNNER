#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define tam 5

int main()
{
    int v[2] = {0, 0}, v_ant[2] = {0, 0};
    char dir;
    char col[tam][tam] = {
        {'.', '.', '.', '#', '.'},
        {'.', '#', '.', '#', '.'},
        {'.', '#', '.', '.', '.'},
        {'.', '.', '.', '#', 'G'},
        {'.', '#', '.', '.', '.'}
    };

    while (true)
    {
        // Imprime a matriz com o 'S' na posição atual
        for (int i = 0; i < tam; i++)
        {
            for (int j = 0; j < tam; j++)
            {
                if (i == v[0] && j == v[1]){
                    printf("S  ");
                }
                else{
                    printf("%c  ", col[i][j]);
                }
            }
            printf("\n");
        }

        // Verifica se chegou no destino
        if (col[v[0]][v[1]] == 'G')
        {
            printf("\nVocê chegou no destino!!!\n");
            break;
        }

        printf("\nQual direção você deseja ir? use wasd\n");
        
        int manh = abs(v[0] - 3) + abs(v[1] - 4);
        
        printf("\nDistância eh: %d", manh);
        scanf("\n %c", &dir);
        
        printf("-------------------------------------\n");

        // Salva posição anterior
        v_ant[0] = v[0];
        v_ant[1] = v[1];

        // Atualiza posição com if-else ao invés de switch
        
        switch(dir){
            
            case 'w':
                case 'W':
                    v[0] -= 1;
                    break;
                
            case 's':
                case 'S':
                    v[0] += 1;
                    break;
                
            case 'a':
                case 'A':
                    v[1] -= 1;
                    break;
                    
            case 'd':
                case 'D':
                    v[1] += 1;
                    break;
        }

        // Verifica validade do movimento
        if (v[0] < 0 || v[0] >= tam || v[1] < 0 || v[1] >= tam || col[v[0]][v[1]] == '#'){
            
            printf("\nMovimento inválido! Você bateu.\n");
            
            // Volta para posição anterior
            v[0] = v_ant[0];
            v[1] = v_ant[1];
            
        }
        
        //d(x1 - y1) + (x2 - y2)
        
    }

    return 0;
}