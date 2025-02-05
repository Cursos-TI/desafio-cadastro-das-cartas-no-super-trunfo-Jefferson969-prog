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
        char codigocidade[3] = "A01";
        char nomecidade[20] = "nomdedacidade";
        int populacao = 5000;
        float area = 10000.50;
        float PIB = 1000000.00;
        int pontostur = 5;

        printf("Qual o Codigo da Cidade?\n");
        scanf(" %s", &codigocidade);

        printf("Qual o nome da Cidade?\n");
        scanf(" %s", &nomecidade);

        printf("Qual a quantidade habitantes da Cidade?\n");
        scanf("%d", &populacao);

        printf("Qual a area Total da Cidade?\n");
        scanf("%f", &area);

        printf("Qual o PIB da Cidade?\n");
        scanf("%f", &PIB);

        printf("Quantos pontos turisticos possue a cidade?\n");
        scanf("%d", &pontostur);

        printf("Codigo da Cidade: %s\n", codigocidade);
        printf("Nome da Cidade: %s\n", nomecidade);
        printf("População: %d\n", populacao);
        printf("Area: %f\n", area);
        printf("PIB: %f\n", PIB);
        printf("Pontos Turisticos: %d\n", pontostur);

    
        return 0;

}
