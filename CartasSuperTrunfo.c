#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, ptur1;
  char estado1, codigo1[4], cidade1[30];
  float area1, pib1;

  int populacao2, ptur2;
  char estado2, codigo2[4], cidade2[30];
  float area2, pib2;

  // Área para entrada de dados
  printf("Digite uma letra de A a H para representar o Estado: ");
  scanf("%c",&estado1);

  printf("Digite o código do carta, sendo, a letra do Estado seguida de um número de 01 a 04: ");
  scanf("%s", codigo1);

  prinf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  // Área para exibição dos dados da cidade

return 0;
} 
