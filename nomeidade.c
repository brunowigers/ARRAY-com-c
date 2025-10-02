#include <stdio.h>

int main(){
    char nome[50]; //array de caracteres para armazenar nome
    int idade; //variavel para idade
//entradas:
printf("digite seu nome:");
scanf("%s",nome);

printf("digite sua idade:");
scanf("%s",&idade);

printf("olá %s, você tem %d anos!\n",nome,idade);

if(idade >= 18){
  printf("olá, você tem  anos!, e pode ter carteira de motorista!");
}else 
  printf("olá, você tem anos!, e não pode ter carteira de motorista! ");

}