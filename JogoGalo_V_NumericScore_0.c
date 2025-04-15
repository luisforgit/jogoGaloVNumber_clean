
#include <stdio.h>

int main()
{
    #include <stdio.h>

    int main()
    {
           int tabuleiro[3][3] = {
             {1,1,5}
            ,{5,1,5}
            ,{1,5,5}
        };
        
        int somaEmDiagonal1 = 0;
        int somaEmDiagonal2 = 0;
        int nrPosicoesZero = 0;
        
        for (int i =0; i <3 ; ++i){
            int somaEmLinha = 0;
            int somaEmColuna =0;
            
            
            for (int j = 0; j < 3; ++j){
                
                //score por linhas
                somaEmLinha +=tabuleiro[i][j];
                //score por colunas
                somaEmColuna +=tabuleiro[j][i];
                //score da diagonal principal
                if (j==i) somaEmDiagonal1 += tabuleiro[i][j];
                //score da diagonal secundária
                if (j+i==2) somaEmDiagonal2 += tabuleiro[i][j];
                if (tabuleiro[i][j] == 0) nrPosicoesZero +=1;
                
                printf("\n");
            }
        
            //Há um Resultado Final se:
            //ganha jogador X, o que acontece quando:
            int vitoriaX = (somaEmDiagonal1 == 15 || somaEmDiagonal2 == 15 || somaEmColuna  == 15 || somaEmLinha == 15 );
            if (vitoriaX) { printf("\nResultado: Vitoria de X!"); break;}
            //ganha jogador O, o que acontece quando:
            int vitoriaO = ( somaEmDiagonal1 == 3 || somaEmDiagonal2 == 3 || somaEmColuna  == 3 || somaEmLinha == 3 );
            if (vitoriaO) { printf("\nResultado: Vitoria de O!"); break;}
            //o jogo fica empatado, o que acontece quando:
            int fimJogo = (nrPosicoesZero == 0 && i == 2);
            if (fimJogo) { printf("\nResultado: Empate!",nrPosicoesZero);}
        }
     
        return 0;
}
