#include <stdio.h>

int main(){
    int notas[5]; //declara um array de 5 possições para armasenar as notas 
    int i;        //variável de controle para o loop (repetição)
    //entrada do usuário
    printf("digite 5 notas:\n");

    for (i=0; i < 5; i++){
        scanf("%d",&notas[i]);   //lê uma nota e armazena na possição i do arrry
    }

//exibição
printf("\n notas digitadas:\n");

for (i =0; i <5; i++){
    printf("%d\n", notas[i]); //imprime a notA DA POSIÇÃO I
}

return 0;



}