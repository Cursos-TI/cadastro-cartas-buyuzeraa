#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


// Carta 01
// Estado: Santa_Catarina
// Cidade: Timbó
// Código da Carta: SC01
// Área: 130.31 KM
// PIB: 329000000
// População: 44000
// Pontos Turísticos: 5

// Carta 02
// Estado: Minas_Gerais
// Cidade: Boa_Esperança
// Código da Carta: MG02
// Área: 202.12 KM
// PIB: 150000000
// População: 25000
// Pontos Turísticos: 3


int main(){ 
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado [18];
  char Cidade [15];
  char Código [3];
  float Área;
  int PIB;
  int população;
  int Pontos_Turísticos;

  // Área para entrada de dados da carta 01
  printf ("Jogador 1 insira os dados da sua carta \n");
  printf ("Insira o nome do Estado use _ no lugar de Espaço \n");
  scanf ("%s", Estado01);
  printf ("Insira o nome da Cidade \n");
  scanf ("%s", Cidade01);
  printf ("Insira o Código da Carta \n");
  scanf ("%s", Código01);
  printf ("Insira a área em KM \n");
  scanf ("%f", &Área01);
  printf ("Insira o PIB da cidade \n");
  scanf ("%d", &PIB01);
  printf ("Insira a população da cidade \n");
  scanf ("%d", &população01);
  printf ("Insira a quantidade de Pontos Turísticos \n");
  scanf ("%d", &Pontos_Turísticos01);

  // Área para entrada de dados da carta 02
  printf ("Jogador 2 insira os dados da sua carta \n");
  printf ("Insira o nome do Estado use _ no lugar de Espaço \n");
  scanf ("%s", Estado02);
  printf ("Insira o nome da Cidade \n");
  scanf ("%s", Cidade02);
  printf ("Insira o Código da Carta \n");
  scanf ("%s", Código02);
  printf ("Insira a área em KM \n");
  scanf ("%f", &Área02);
  printf ("Insira o PIB da cidade \n");
  scanf ("%d", &PIB02);
  printf ("Insira a população da cidade \n");
  scanf ("%d", &população02);
  printf ("Insira a quantidade de Pontos Turísticos \n");
  scanf ("%d", &Pontos_Turísticos02);


  // Área para exibição dos dados da cidade
  printf ("\n");
  printf ("Estado: %s \n", Estado01);
  printf ("Cidade: %s \n", Cidade01);
  printf ("Código da Carta: %s \n", Código01);
  printf ("Área: %.2f KM \n", Área01);
  printf ("PIB: %d \n", PIB01);
  printf ("População: %d \n", população01);
  printf ("Pontos Turísticos: %d \n", Pontos_Turísticos01);

  printf ("\n");
  printf ("Estado: %s \n", Estado02);
  printf ("Cidade: %s \n", Cidade02);
  printf ("Código da Carta: %s \n", Código02);
  printf ("Área: %.2f KM \n", Área02);
  printf ("PIB: %d \n", PIB02);
  printf ("População: %d \n", população02);
  printf ("Pontos Turísticos: %d \n", Pontos_Turísticos02);

return 0;
} 
