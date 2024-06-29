# cub3D

## Descrição

`cub3D` é um projeto desenvolvido como parte do currículo da 42 São Paulo. O objetivo é criar um jogo 3D básico utilizando a técnica de raycasting, inspirando-se no clássico jogo Wolfenstein 3D. Este projeto não só reforça conceitos fundamentais de gráficos 3D, mas também habilidades de programação em C e manipulação de arquivos.

## Funcionalidades

- **Renderização 3D**: Implementação de gráficos tridimensionais utilizando raycasting, uma técnica de renderização que projeta raios a partir do ponto de vista do jogador para detectar paredes e objetos.
- **Movimentação do Jogador**: Controle total do jogador, incluindo movimentação para frente, para trás, para os lados e rotação da câmera, proporcionando uma experiência imersiva.
- **Suporte a Texturas**: Inclusão de diferentes tipos de paredes e texturas, permitindo um ambiente de jogo visualmente diversificado e interessante.
- **Leitura de Mapas**: Capacidade de ler e interpretar arquivos de mapa com extensão `.cub`, facilitando a criação e modificação de níveis de jogo.

## Instalação

Para compilar e executar o `cub3D`, siga os passos abaixo:

1. **Clone este repositório:**
   ```bash
   git clone https://github.com/lmoraesdev/cub3D.git

   ```
2. Navegue até o diretório do projeto:
   ```bash
      cd cub3D
   ```
3. Compile o projeto utilizando make:
   ```
   make
   ```
5. Execute o jogo com um arquivo de mapa:
   ```
   ./cub3D path/to/map.cub
   ```
## Uso

- Movimentação: Utilize as teclas W, A, S, D ou as setas direcionais para mover o jogador.
- Rotação da Câmera: Utilize as teclas ← e → para girar a câmera.

## Estrutura do Projeto

- src/ - Contém o código fonte principal, incluindo a lógica de renderização e controle do jogo.
- textures/ - Armazena as texturas usadas no jogo, como imagens de paredes e objetos.
- maps/ - Exemplos de arquivos de mapas no formato .cub, que definem a disposição dos elementos no jogo.
- include/ - Arquivos de cabeçalho do projeto, contendo declarações de funções e definições de estruturas.
## Motivação
    Este projeto foi desenvolvido como parte do currículo da 42 São Paulo para demonstrar proficiência em:

- Programação em C
- Manipulação de gráficos e algoritmos de renderização
- Estruturas de dados e manipulação de arquivos
- Trabalho com projetos de software de médio porte
- Desafios e Aprendizados
- Durante o desenvolvimento do cub3D, enfrentei diversos desafios, incluindo a implementação eficiente do algoritmo de raycasting e a gestão de memória em C. Esses desafios foram superados com sucesso, resultando em um entendimento mais profundo de técnicas avançadas de programação e renderização gráfica.
