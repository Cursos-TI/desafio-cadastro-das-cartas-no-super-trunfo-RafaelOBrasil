#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Define o máximo de cartas cadastráveis
#define MAX_CARTAS 10
Carta *listadeCartas[MAX_CARTAS];

// Estrutura da carta
typedef struct
{
    char estado[50];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

} Carta;

/*Funções*/ 
// Guarda a carta na lista de cartas
void guardarCarta(Carta *carta, int numeroCarta)
{
    listadeCartas[numeroCarta] = carta;
}

// Cadastra a carta
void cadastrarCarta(Carta *carta, int numeroCarta)
{
    printf("Digite o estado: ");
    scanf("%49s", carta->estado);

    printf("Digite o código: ");
    scanf("%3s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf("%49s", carta->nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Exibe as cartas cadastradas
void exibirTodasCartas()
{
    for (int i = 0; i < MAX_CARTAS; i++)
    {
        if (listadeCartas[i] != NULL)
        {
            printf("Carta %d:\n", i + 1);
            exibirCarta(listadeCartas[i]);
            printf("\n");
        }
    }
}

/*Função Principal*/
int main() {

    // Define a localização
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int start = 1;
    int opcao = 0;
    int numeroCarta = 0;
    Carta carta;

    // Loop principal
    while (start == 1)
    {
        printf("Super Trunfo\n\n");
        printf("1 - Cadastrar Cartas\n");
        printf("2 - Exibir Cartas\n");
        printf("3 - Sair\n\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        // Limpa a tela
        system("clear");

        // Verifica a opção escolhida e executa a ação
        if (opcao == 1)
        {
            printf("Cadastro de Cartas\n\n");
            cadastrarCarta(&carta, numeroCarta);
            guardarCarta(&carta, numeroCarta);

            numeroCarta++;
        }
        else if (opcao == 2)
        {
            exibirTodasCartas();
        }
        else if (opcao == 3)
        {
            start = 0;
        }
    }

    return 0;
}
