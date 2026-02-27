#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // ===== CARTA 1 =====
     char estado1[50] = "AMAZONAS"; 
    char codigo1 [5]= "A" ;
    char codigocarta1 [5]= "A01" ;
    char cidade1[50]= "MANAUS";
    int populacao1 = 2303732;
    float area1 = 11401092.0;
    float pib1 = 127.6;
    int ponto_turistico1= 40;
   
 // ===== CARTA 2 =====
    char estado2[50] = "SAO PAULO";
    char codigo2 [5]= "B";
    char codigocarta2[5]="B02";
    char cidade2[50]= "SAO PAULO";
    int populacao2= 12325232;
    float area2= 1521.11;
    float pib2= 699.3;
    int ponto_turistico2= 50;

  // Área para entrada de dados

   //Entrada de dados para a carta de número 1
    printf("Carta 1\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):  \n");
    scanf(" %c", estado1); 

    printf("Digite a letra do estado seguida de um número de 01 a 04: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s",cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &ponto_turistico1);

   //Entrada de dados para a carta de número 2
    printf("Carta 2\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):  \n");
   scanf(" %c", estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04:  \n");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade:  \n");
    scanf(" %s", cidade2);

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
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf(" Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais.\n", pib2);
    printf("Número de ponto_turistico1: %i\n\n", ponto_turistico1);

    //Exibição da carta número 2
    printf("Carta 2\n"); 
    printf("Estado: %sc\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais.\n", pib2);
    printf("Número de ponto_turistico: %i\n", ponto_turistico2);


return 0;
} 
