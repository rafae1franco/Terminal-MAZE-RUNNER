# 🧩 TerminalMazeRunner

## 🇧🇷 Sobre o Projeto

TerminalMazeRunner é um mini-jogo em linguagem C executado no terminal. O objetivo é navegar por um labirinto 5x5, evitando obstáculos (`#`) até alcançar o destino (`G`). O jogador se movimenta usando as teclas `W`, `A`, `S` e `D`, e recebe como dica a distância de Manhattan até o objetivo. O jogo verifica movimentos inválidos, como colisões e saídas do mapa, e exibe o labirinto atualizado a cada jogada.

### 🎮 Controles

- `W` – Cima
- `A` – Esquerda
- `S` – Baixo
- `D` – Direita

### 📦 Funcionalidades

- Interface em texto no terminal
- Verificação de colisões com obstáculos e bordas
- Cálculo da distância de Manhattan até o destino
- Labirinto fixo com visualização da posição atual (`S`) do jogador

### 🛠️ Requisitos

- Compilador C (ex: `gcc`)
- Terminal

### ▶️ Como compilar e executar

```bash
gcc main.c -o maze
./maze

--------------------------------------------------------------------------
# 🧩 TerminalMazeRunner

## About the Project

TerminalMazeRunner is a mini terminal-based C game. The goal is to navigate through a 5x5 maze, avoiding obstacles (`#`) and reaching the goal (`G`). The player moves using the `W`, `A`, `S`, and `D` keys, and the game provides a hint via the Manhattan distance to the goal. Invalid moves are detected, and the maze updates after each input.

### 🎮 Controls

- `W` – Up  
- `A` – Left  
- `S` – Down  
- `D` – Right  

### 📦 Features

- Text-based interface in the terminal  
- Collision detection with walls and boundaries  
- Manhattan distance to the goal as a hint  
- Static maze with live position tracking (`S`)  

### 🛠️ Requirements

- C compiler (e.g., `gcc`)  
- Terminal  

### ▶️ How to Compile and Run

```bash
gcc main.c -o maze
./maze
