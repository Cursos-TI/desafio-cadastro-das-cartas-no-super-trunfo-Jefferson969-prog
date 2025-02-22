#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Variaveis carta 01
    char letraestado1;
    char codigocidade1[3];
    char nomecidade1[20];
    int populacao1 = 5000;
    float area1 = 10000.50;
    float PIB1 = 1000000.00;
    int pontostur1 = 5;

    //Variaveis carta 02
    char letraestado2;
    char codigocidade2[3];
    char nomecidade2[20];
    int populacao2 = 5000;
    float area2 = 10000.50;
    float PIB2 = 1000000.00;
    int pontostur2 = 5;

        
    //Entrada de Dados da Carta 01
    printf("Entre com os dados da Carta 01\n");
    printf("Digite uma Letra de A-H para Representar o Estado\n");
    scanf(" %c", &letraestado1);
    printf("Qual o Codigo da Cidade?\n");
    scanf(" %s", &codigocidade1);
    printf("Qual o nome da Cidade?\n");
    scanf(" %[^\n]", &nomecidade1);
    printf("Qual a quantidade habitantes da Cidade?\n");
    scanf("%d", &populacao1);
    printf("Qual a area Total da Cidade?\n");
    scanf("%f", &area1);
    printf("Qual o PIB da Cidade?\n");
    scanf("%f", &PIB1);
    printf("Quantos pontos turisticos possue a cidade?\n");
    scanf("%d", &pontostur1);
        
        

    //Entrada de Dados da Carta 02
    printf("Entre com os dados da Carta 02\n");
    printf("Digite uma Letra de A-H para Representar o Estado\n");
    scanf(" %c", &letraestado2);
    printf("Qual o Codigo da Cidade?\n");
    scanf(" %s", &codigocidade2);
    printf("Qual o nome da Cidade?\n");
    scanf(" %[^\n]s", &nomecidade2);
    printf("Qual a quantidade habitantes da Cidade?\n");
    scanf("%d", &populacao2);
    printf("Qual a area Total da Cidade?\n");
    scanf("%f", &area2);
    printf("Qual o PIB da Cidade?\n");
    scanf("%f", &PIB2);
    printf("Quantos pontos turisticos possue a cidade?\n");
    scanf("%d", &pontostur2);

    //Print dos dados da Carta 01
    printf("\nCarta 01\n");
    printf("Estado: %c\n", letraestado1);
    printf("Codigo da Cidade: %s\n", codigocidade1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", pontostur1);

    //Print dos dados da Carta 02
    printf("\nCarta 02\n");
    printf("Estado: %c\n", letraestado2);
    printf("Codigo da Cidade: %s\n", codigocidade2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", pontostur2);
        
            
    return 0;

}