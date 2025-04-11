#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

     //declaração de váriaveis
     char letra;
     char codigodacarta[3];
     char codificacao[5];
     char nomedacidade[50];
     int populacao;
     float areadacidade;
     float PIB;
     int pontosturisticos;
 
     //Carta 1
     printf("Carta 1: ");
     printf("\n");

     //ESTADO
     printf("Estado(digite de A até H):");
     scanf(" %c", &letra);

     //CÓDIGO
     printf("Escolha um número de 01 a 04: ");
     scanf(" %2s", codigodacarta);
     sprintf(codificacao, "%c%s", letra, codigodacarta);

     //NOME DA CIDADADE
     printf("Digite o nome da cidade: ");
     scanf(" %[^\n]", nomedacidade);

     //QUANTIDADE DA POPULAÇÃO
     printf("Digite a quantidade da população: ");
     scanf("%d", &populacao);

     //ÁREA DA CIDADE
     printf("Digite a área da cidade(somente números): ");
     scanf("%f", &areadacidade);
 
     //PIB DA CIDADE
     printf("Digite o PIB(somente números): ");
     scanf("%f", &PIB);
 
     //PONTOS TURÍSTICOS
     printf("Digite a quantidade pontos turísticos(somente números): ");
     scanf("%d", &pontosturisticos);
 
     //QUEBRA DE LINHA PARA A PRÓXIMA CARTA
     printf("\n");
     printf("\n");
 
     //Carta 2
     printf("Carta 2: ");
     printf("\n");
 
     //ESTADO
     printf("Estado(digite de A até H):");
     scanf(" %c", &letra);
 
     //CÓDIGO
     printf("Escolha um número de 01 a 04: ");
     scanf(" %2s", codigodacarta);
     sprintf(codificacao, "%c%s", letra, codigodacarta);
 
     //NOME DA CIDADADE
     printf("Digite o nome da cidade: ");
     scanf(" %[^\n]", nomedacidade);
 
     //QUANTIDADE DA POPULAÇÃO
     printf("Digite a quantidade da população: ");
     scanf("%d", &populacao);
 
     //ÁREA DA CIDADE
     printf("Digite a área da cidade(somente números): ");
     scanf("%f", &areadacidade);
 
     //PIB DA CIDADE
     printf("Digite o PIB(somente números): ");
     scanf("%f", &PIB);
 
    //PONTOS TURÍSTICOS
     printf("Digite a quantidade pontos turísticos(somente números): ");
     scanf("%d", &pontosturisticos);
 
     //quebra de linha para a impressão dos dados
     printf("\n");
     printf("\n");

     //impressão dos dados da carta 1
     printf("\nCarta 1:\n");
     printf("Estado: %c\n", letra);
     printf("Código: %s\n", codificacao);
     printf("Nome da Cidade: %s\n", nomedacidade);
     printf("População: %d\n", populacao);
     printf("Área: %.2f km²\n", areadacidade);
     printf("PIB: %f.2f bilhões de Reais.\n", PIB);
     printf("Número de pontos turísticos: %d\n", pontosturisticos);


     //Impressão dos dados da carta 2
     printf("\nCarta 2:\n");
     printf("Estado: %c\n", letra);
     printf("Código: %s\n", codificacao);
     printf("Nome da Cidade: %s\n", nomedacidade);
     printf("População: %d\n", populacao);
     printf("Área: %.2f km²\n", areadacidade);
     printf("PIB: %f.2f bilhões de Reais.\n", PIB);
     printf("Número de pontos turísticos: %d\n", pontosturisticos);

    return 0;
}
