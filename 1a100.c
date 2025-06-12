#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int numesc;
int vezesnum = 0;

bool venceu = false;
int main(){
    srand(time(0));
    int num = (rand() % 100) + 1;
    
    printf("Um número aleatório entre 1 e 100 foi escolhido.\nDigite um número para tentar descobrir qual.\n");

    while(venceu == false){
    scanf("%d", &numesc);
    vezesnum += 1;
    printf("\e[2J\e[H");
    if(numesc == num){
        printf("Parabéns, você acertou!!!");
        venceu = true;
    }else if(numesc > num){
        printf("O número digitado é MAIOR que o número aleatório.\n");
        printf("Digite outro número, você já tentou adivinhar o número %d vezes\n", vezesnum);
    }else{
        printf("O número digitado é MENOR que o número aleatório.\n");
        printf("Digite outro número, você já tentou adivinhar o número %d vezes\n", vezesnum);
    }
    }
    return 0;
}