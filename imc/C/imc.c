#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Variáveis 
char nome[60];
int idade;
float altura;
float peso;

// Função para mostrar obter os dados
void get_datas(){
  printf("Nome: ");
  scanf("%s", &nome);
  printf("Idade: ");
  scanf("%d", &idade);
  printf("Altura: ");
  scanf("%f", &altura);
  printf("Peso: ");
  scanf("%f", &peso);
}


// Função para mostrar os dados
void show_datas(){
  printf("------------------------------\n");
  printf("Oi, %s! Seja bem-vindo!\n", nome);
  printf("Confirme os seus dados:\n");
  printf("Idade: %d\n", idade);
  printf("Altura: %.2f\n", altura);
  printf("Peso: %.2f\n", peso);
  printf("------------------------------\n");
}


// Função para executar processo básico para limpar a tela
void clean_screen(){
  system("pause");
  system("cls");
}


// Função para calcular o IMC e mostrar o resultado
void imc(float peso, double altura){
  double imc = peso/pow(altura, 2);
  printf("Seu IMC: %.2f\n", imc);
  if(imc < 18.5) {
    printf("Abaixo do peso!\n");
  } else if(imc >= 18.5 && imc <=24.9 ) {
    printf("Peso normal!\n");
  } else if(imc >= 25.0 && imc <= 29.9) {
    printf("Sobrepeso!\n");
  } else if(imc >= 30.0 && imc<= 34.9) {
    printf("Obesidade tipo I!\n");
  } else if(imc >= 35.0 && imc <= 39.9) {
    printf("Obesidade tipo II!\n");
  } else if(imc >= 40.0) {
    printf("Obesidade tipo III!\n");
  } else{
    printf("ERRO!");
  }
}


// Função principal
int main(){
  clean_screen();
  get_datas();
  clean_screen();
  show_datas();
  clean_screen();
  imc(peso, altura);
  clean_screen();


  return 0;
}


