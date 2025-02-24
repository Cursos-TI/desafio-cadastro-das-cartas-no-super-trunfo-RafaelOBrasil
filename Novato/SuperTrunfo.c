#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char estado1[50], estado2[50];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //Criar carta 1
    printf("Carta 1\n");

    //Nome do estado
    printf("Digite o estado: ");
    scanf("%49s", estado1);

    printf("Digite o código: ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Criar carta 2
    printf("Carta 2\n");

    printf("Digite o estado: ");
    scanf("%49s", estado2);

    printf("Digite o código: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibir as cartas
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;

}
