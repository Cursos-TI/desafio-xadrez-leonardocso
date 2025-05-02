#include <stdio.h>
#include <locale.h>

//Bishop movement
void bishop(unsigned int n) {
    for (int i = 0; i < n; i++) {
        printf("Direita ");
        printf("Cima\n");
    }
}

//Rook movement
int rook(unsigned int n) {
    if (n > 8) {
        n = 8; //Avoid rook to move out of the board
    }
    
    if (n == 0) {
        return 0;
    } else {
        printf("Direita\n");
        return rook(n - 1); //Recursively 'moves' the rook n times
    }
}

//Queen movement
int queen(unsigned int n) {
    if (n > 8) {
        n = 8; //Avoid queen to move out of the board
    }
    
    if (n == 0) {
        return 0;
    } else {
        printf("Esquerda\n");
        return queen(n - 1); //Recursively 'moves' the queen n times
    }
}

//Knight movement
void knight(){
    int i = 0;
    while (i < 1) {
        for (int j = 0; j < 3; j++) {
            if (j == 2) break; // Stops the loop at count 2
            printf("Cima\n");
        }
        printf("Direita\n");
        ++i;
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    unsigned short int option;
    printf("Escolha uma peça para movimentar:\n");
    printf("1 - bispo / 2 - Torre / 3 - Raínha / 4 - Cavalo\n");
    printf("ou digite 0 para sair.\n");
    scanf("%u", &option);
    while (option !=0) {
        switch (option)
        {
        case 1: //Bishop move
            bishop(5);
            break;
        
        case 2: //Rook move
            rook(5);
            break;

        case 3: //Queen move
            queen(8);
            break;

        case 4: //Knight move
            knight();
            break;
        
        default:
            printf("Opção inválida!\n");
            break;
        }
        scanf("%u", &option);
    } 
    return 0;
}
