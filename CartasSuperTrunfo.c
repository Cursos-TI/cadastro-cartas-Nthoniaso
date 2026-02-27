#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // ===== CARTA 1 =====
     char estado, estado1; 
    char codigo [5];
    char codigocarta [5];
    char nomecidade1[50];
    int populacao, pontoturistico;
    float area; 
  

 // ===== CARTA 2 =====
    char estado, estado2;
    char codigocarta[5];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

  // Área para entrada de dados

   //Entrada de dados para a carta de número 1
    printf("Carta 1\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):  \n");
    scanf(" %c", &estado); 

    printf("Digite a letra do estado seguida de um número de 01 a 04:  \n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade:  \n");
    scanf(" %s", &cidade);

    printf("Digite o número de habitantes da cidade:  \n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados:  \n");
    scanf(" %f", &area);

    printf("Digite o Produto Interno Bruto da cidade:  \n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &ponto_turistico);

   //Entrada de dados para a carta de número 2
    printf("Carta 2\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):  \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04:  \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade:  \n");
    scanf(" %s", &cidade2);

    printf("Digite o número de habitantes da cidade:  \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados:  \n");
    scanf(" %f", &area2);

    printf("Digite o Produto Interno Bruto da cidade:  \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade:  \n");
    scanf(" %d", &ponto_turistico2);


  // Área para exibição dos dados da cidade

 //Exibição da carta número 1
    printf("Carta 1\n"); 
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %i \n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais.\n", pib);
    printf("Número de Pontos_Turisticos: %i\n\n", ponto_turistico);

    //Exibição da carta número 2
    printf("Carta 2\n"); 
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais.\n", pib2);
    printf("Número de Ponto_Turistico: %i\n", ponto_turistico2);


return 0;
} 
