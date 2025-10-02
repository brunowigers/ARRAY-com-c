#include <stdio.h>

int main(){
    char nome[50]; //array de caracteres para armazenar nome
    int idade; //variavel para idade
//entradas:
printf("digite seu nome:");
scanf("%s",nome);

printf("digite sua idade:");
scanf("%d",&idade);

if(idade >= 18){
  printf("você pode ter carteira de motorista!");
}else 
  printf("você não pode ter carteira de motorista! ");

}