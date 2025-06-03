#include <stdio.h>
//jogo da velha
int main(){
    int table[3][3] = {0};
    int ganhou = 0;
    int rond = 1; //conta em que round o jogo está
    int x,y, p1 = 0, p2= 0;
    for(int rod = 1; rod < 10 && !ganhou;){
         if(rod%2!=0){
            printf("Vez do jogador 1(digite a linha e coluna): ");
            scanf("%d%d", &x,&y);
            if(table[x][y]==0){
                table[x][y] = 1;
                rod++;
            }
            else{
                printf("lugar ja preenchido!!\n");
            }
        }
        else if(rod%2==0){
             printf("Vez do jogador 2(digite a linha e coluna): ");
             scanf("%d%d", &x,&y);
             if(table[x][y]==0){
                table[x][y] = 2;
                rod++;
             }
             else{
                printf("lugar ja preenchido!!\n   ");
            }
        }
        //verifica se alguem ganhou
        for(int col = 0; col < 3; col++){
            int count1 = 0;
            int count2 = 0;
            for(int linha = 0; linha < 3; linha++){
                if(table[linha][col]==1){
                    count1++;
                }
                if(table[linha][col]==2){
                    count2++;
                }
            }
            if(count1==3 || count2==3){
                ganhou = 1;
            }
            if(count1==3){
                p1 = 1;
            }
            else if(count2==3){
                p2 = 1;
            }
        }
        int dia1 = 0, dia2 = 0;
        for(int dia = 0; dia <3; dia++){
            if(table[dia][dia]==1){
                dia1++;
            }
            if(table[dia][dia]==2){
                dia2++;
            }
            if(dia1==3 || dia2==3){
                ganhou = 1;
            }
            if(dia1==3){
                p1 = 1;
            }
            else if(dia2==3){
                p2 = 1;
            }
        }

       int ADia1 = 0;
       int ADia2 = 0;
       for(int linha = 0; linha<3; linha++ ){
        
            if(table[linha][2 - linha]==1){
                ADia1++;
            }
             if(table[linha][2 - linha]==2){
                ADia2++;
            }
            if(ADia1==3 || ADia2==3){
                ganhou = 1;
            }
            if(ADia1==3){
                p1 = 1;
            }
            else if(Adia2==3){
                p2 = 1;
            }
       }

        for(int linha = 0; linha < 3; linha++){
            int count1 = 0;
            int count2 = 0;
            for(int col = 0; col < 3; col++){
                if(table[linha][col]==1){
                    count1++;
                }
                if(table[linha][col]==2){
                    count2++;
                }
            }
            if(count1==3 || count2==3){
                ganhou = 1;
            }
            if(count1==3){
                p1 = 1;
            }
            else if(count2==3){
                p2 = 1;
            }
        }
        //rmpime a tabela
         printf("-----round:%d--------- \n    ", rond);
        for(int i = 0; i < 3; i++){
            printf("|");
            for(int j =0; j < 3; j++){
                if(table[i][j]==0){
                    printf(" |");
                }
                 if(table[i][j]==1){
                    printf("X|");
                }
                if(table[i][j]==2){
                    printf("o|");
                }
            }
            if(i<2){
            printf("\n    ");
            }
            else{
                printf("\n");
            }
        }
        rond++;
    }

    printf("----------FIM DE JOGO-------------\n");
    if(p1){
        printf("    JOGADOR 1 GANHOU!\n");
    }
    else{
        printf("    JOGADOR 2 GANHOU!\n");
    }
}
