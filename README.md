# jogoGaloVNumber_clean
 Versao Alternativa dum algoritmo para o jogo do galo.
 São atribuídos aos jogadores números distintos para as suas jogadas (Ex: 3 para o jogador X e 5 para o jogador O).
 A soma das jogadas de ambos os jogadores são armazenadas em 3 arrays de 3 posições: 
  
  a) Array linhas horizontais
  
  A posicção 0 representa a primeira linha do tabuleiro e contém a soma das jogadas de ambos os jogadores na primeira linha do tabuleiro.
    
  Se a soma for igual a 9, ganhou o jogador X. Se for igual a 15, ganhou o jogador O. Caso contrário, ninguém ganha nessa linha.
  Por exemplo, se o jogador X tem duas casas ocupadas na primeira linha e o jogador O uma, o valor da soma da pontuação nessa linha será 11. Se for
  o jogador O a ocupar duas casas primeira linha e o jogador X uma, o valor da soma será 14. Não sendo qualquer das pontuações
  nestes exemplos iguais a 9 ou a 15, não ganha nenhum dos jogadores.
    
  O mesmo raciocínio aplica-se ás retantes posições do array, com a 2.a linha do quadro representada pela posição 1 e a 3.a linha
  do quadro represenada pela posição 2 do array.
 
 b) Array de linhas verticais
  Aplica-se o exposto em a) paras linhas verticais

  c) Array de diagonais

  É ignorada a posição 0 do array, uma vez que apenas existem 2 diagonais, a principal e a secundária, pelo que o algoritmo é construído 
  quer identificar a diagonal quer para ter em conta a existência de apenas duas ao somar as pontuações.  .

  
