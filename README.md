# jogoGaloVNumber_clean
 Versao Alternativa dum algoritmo para o jogo do galo.
 São atribuídos aos jogadores números distintos para as suas jogadas (Ex: 3 para o jogador A e 5 para o jogador B).
 Os números das jogadas são armazenadas em 3 arrays de 3 posições representando: 
  
  a) Array linhas horizontais
    Aposicção 0 representa a primeira linha do tabuleiro. 
    Contém a soma das jogadas de ambos os jogadores na primeira linha do tabuleiro; 
    Se a soma for igual a 9, ganhou o jogador A. Se for igual a 12, ganhou o jogador B. Caso contrário, ninguém ganha nessa linha.
   O mesmo raciocínio aplica-se ás retantes posições do array, com a 2.a linha do quadro representada pela posição 1 e a 3.a linha
   do quadro represenada pela posição 2 do array.
 
 b) Array de linhas verticais
  Aplica-se o exposto em a) paras linhas verticais

  c) Array de diagonais

  É ignorada a posição 0 do array, uma vez que apenas existem 2 diagonais, a principal e a secundária.

  
