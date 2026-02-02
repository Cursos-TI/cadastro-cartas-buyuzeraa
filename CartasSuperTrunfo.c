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

  // Área para entrada de dados
  printf ("Jogador 1 insira os dados da sua carta \n");
  printf ("Insira o nome do Estado use _ no lugar de Espaço \n");
  scanf ("%s", Estado);
  printf ("Insira o nome da Cidade \n");
  scanf ("%s", Cidade);
  printf ("Insira o Código da Carta \n");
  scanf ("%s", Código);
  printf ("Insira a área em KM \n");
  scanf ("%f", &Área);
  printf ("Insira o PIB da cidade \n");
  scanf ("%d", &PIB);
  printf ("Insira a população da cidade \n");
  scanf ("%d", &população);
  printf ("Insira a quantidade de Pontos Turísticos \n");
  scanf ("%d", &Pontos_Turísticos);


  // Área para exibição dos dados da cidade
  printf ("\n");
  printf ("Estado: %s \n", Estado);
  printf ("Cidade: %s \n", Cidade);
  printf ("Código da Carta: %s \n", Código);
  printf ("Área: %.2f KM \n", Área);
  printf ("PIB: %d \n", PIB);
  printf ("População: %d \n", população);
  printf ("Pontos Turísticos: %d \n", Pontos_Turísticos);

return 0;
} 
