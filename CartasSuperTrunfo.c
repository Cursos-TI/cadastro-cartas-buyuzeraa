#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){ 
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado [18];
  char Cidade [15];
  char Código [3];
  float Área;
  int PIB;
  int população;
  int Pontos_Turísticos;

  // Área para entrada de dados
  printf ("Insira o nome do Estado\n");
  scanf ("%s", Estado);
  printf ("Insira o nome da Cidade \n");
  scanf ("%s", Cidade);
  printf ("Insira o Código da Carta \n");
  scanf ("%s", Código);
  printf ("Insira a área em KM \n");
  scanf ("%.2f", &área);
  printf ("Insira o PIB da cidade \n");
  scanf ("%d", &PIB);
  printf ("Insira a população da cidade \n");
  scanf ("%d", &população);
  printf ("Insira a quantidade de Pontos Turísticos \n");
  scanf ("%d", &Pontos_Turísticos);


  // Área para exibição dos dados da cidade

return 0;
} 
