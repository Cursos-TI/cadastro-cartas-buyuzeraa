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
  // Área para definição das variáveis para armazenar as propriedades das cidades, deve-se inserir _ no lugar de espaço nos nomes
  char Estado01 [18]; 
  char Cidade01 [15];
  char Código01 [3];
  float Área01;
  float PIB01;
  float população01;
  int Pontos_Turísticos01;

  char Estado02 [17];
  char Cidade02 [14];
  char Código02 [4];
  float Área02;
  float PIB02;
  float população02;
  int Pontos_Turísticos02;

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
  scanf ("%f", &PIB01);
  printf ("Insira a população da cidade \n");
  scanf ("%f", &população01);
  printf ("Insira a quantidade de Pontos Turísticos \n");
  scanf ("%d", &Pontos_Turísticos01);

  float pibCapita01 = PIB01 / população01;
  float Densidade01 = população01 / Área01;

  

  // Área para entrada de dados da carta 02
  printf ("\n");
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
  scanf ("%f", &PIB02);
  printf ("Insira a população da cidade \n");
  scanf ("%f", &população02);
  printf ("Insira a quantidade de Pontos Turísticos \n");
  scanf ("%d", &Pontos_Turísticos02);

  float pibCapita02 = PIB02 / população02;
  float Densidade02 = população02 / Área02;


  // Área para exibição dos dados da cidade
  printf ("\n");
  printf ("Estado: %s \n", Estado01);
  printf ("Cidade: %s \n", Cidade01);
  printf ("Código da Carta: %s \n", Código01);
  printf ("Área: %.2f KM \n", Área01);
  printf ("PIB: %.2f \n", PIB01);
  printf ("População: %.2f \n", população01);
  printf ("Pontos Turísticos: %d \n", Pontos_Turísticos01);
  printf ("Densidade demografica: %.2f \n", Densidade01);
  printf ("PIB per Capita %.2f \n", pibCapita01);

  printf ("\n");
  printf ("Estado: %s \n", Estado02);
  printf ("Cidade: %s \n", Cidade02);
  printf ("Código da Carta: %s \n", Código02);
  printf ("Área: %.2f KM \n", Área02);
  printf ("PIB: %.2f \n", PIB02);
  printf ("População: %.2f \n", população02);
  printf ("Pontos Turísticos: %d \n", Pontos_Turísticos02);
  printf ("Densidade Demográfica: %.2f \n", Densidade02);
  printf ("PIB per Capita %.2f \n", pibCapita02);

  int opcao; 
  printf ("Quais dados serão comparados?");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade\n");
  printf("6 - PIB per Capita\n");
  scanf("%d", &opcao);

  switch(opcao) {

    case 1: // Área
        if (Área01 > Área02)
            printf("Carta 1 venceu (Area)!\n");
        else if (Área02 > Área01)
            printf("Carta 2 venceu (Area)!\n");
        else
            printf("Empate!\n");
        break;

    case 2: // PIB
        if (PIB01 > PIB02)
            printf("Carta 1 venceu (PIB)!\n");
        else if (PIB02 > PIB01)
            printf("Carta 2 venceu (PIB)!\n");
        else
            printf("Empate!\n");
        break;

    case 3: // População
        if (população01 > população02)
            printf("Carta 1 venceu (Populacao)!\n");
        else if (população02 > população01)
            printf("Carta 2 venceu (Populacao)!\n");
        else
            printf("Empate!\n");
        break;

    case 4: // Pontos turísticos
        if (Pontos_Turísticos01 > Pontos_Turísticos02)
            printf("Carta 1 venceu (Pontos Turisticos)!\n");
        else if (Pontos_Turísticos02 > Pontos_Turísticos01)
            printf("Carta 2 venceu (Pontos Turisticos)!\n");
        else
            printf("Empate!\n");
        break;

    case 5: // Densidade (MENOR vence)
        if (Densidade01 < Densidade02)
            printf("Carta 1 venceu (Densidade)!\n");
        else if (Densidade02 < Densidade01)
            printf("Carta 2 venceu (Densidade)!\n");
        else
            printf("Empate!\n");
        break;

    case 6: // PIB per capita
        if (pibCapita01 > pibCapita02)
            printf("Carta 1 venceu (PIB per Capita)!\n");
        else if (pibCapita02 > pibCapita01)
            printf("Carta 2 venceu (PIB per Capita)!\n");
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opcao invalida!\n");

  }



return 0;
} 
