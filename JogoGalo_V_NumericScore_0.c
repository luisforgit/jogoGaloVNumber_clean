 int i = 3;   

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
       int tabuleiro[3][3] = {
         {1,1,5}
        ,{5,1,5}
        ,{1,5,1}
    };
    
    int somaEmDiagonal1 = 0;
    int somaEmDiagonal2 = 0;
    
    for (int i =0; i <3 ; ++i){
        int z = i;
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
            printf("\n");
        }
    
        //Resultado Final
        //ganha jogador X se:
        int vitoriaX = (somaEmDiagonal1 == 15 || somaEmDiagonal2 == 15 || somaEmColuna  == 15 || somaEmLinha == 15 );
        if (vitoriaX) { printf("\nResultado: Vitoria de X!"); break;}
        //ganha jogador O se:
        int vitoriaO = ( somaEmDiagonal1 == 3 || somaEmDiagonal2 == 3 || somaEmColuna  == 3 || somaEmLinha == 3 );
        if (vitoriaO) { printf("\nResultado: Vitoria de O!"); break;}
        //o jogo fica empatado se:
        int fimJogo = (i>=2);
        if (fimJogo) { printf("\ni= %d Resultado: Empate!",i); break;}
        printf ("\ni=%d fimJogo: %d",i,fimJogo);
    
    
    }
 
    return 0;
}
