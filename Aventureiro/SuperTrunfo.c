#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Define o máximo de cartas cadastráveis
#define MAX_CARTAS 10

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

Carta *listadeCartas[MAX_CARTAS];

/*Funções*/ 
// Guarda a carta na lista de cartas
void guardarCarta(Carta *carta, int numeroCarta)
{
    listadeCartas[numeroCarta] = carta;
}

// Cadastra a carta
void cadastrarCarta(Carta *carta)
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

void exibirCarta(Carta *carta,int numeroCarta)
{
    printf("Estado: %s\n", carta->estado);
    printf("Código: %s\n", carta->codigo);
    printf("Nome da cidade: %s\n", carta->nomeCidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f\n", carta->area);
    printf("PIB: %.2f\n", carta->pib);
    printf("Pontos turísticos: %d\n", carta->pontosTuristicos);
}

// Exibe as cartas cadastradas
void exibirTodasCartas()
{
    for (int i = 0; i < MAX_CARTAS; i++)
    {
        if (listadeCartas[i] != NULL)
        {
            printf("Carta %d:\n", i + 1);
            exibirCarta(listadeCartas[i], i + 1);
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
            if (numeroCarta < MAX_CARTAS)
            {
                printf("Cadastro de Cartas\n\n");

                system("clear");
                printf("Carta %d\n", numeroCarta + 1);

                // Aloca memória para uma nova carta
                Carta *novaCarta = (Carta *)malloc(sizeof(Carta));
                if (novaCarta == NULL)
                {
                    printf("Erro ao alocar memória!\n");
                    exit(1);
                }

                cadastrarCarta(novaCarta);
                guardarCarta(novaCarta, numeroCarta);

                numeroCarta++;
            }
            else
            {
                printf("Número máximo de cartas cadastradas atingido!\n");
            }
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

    // Libera a memória alocada para as cartas
    for (int i = 0; i < MAX_CARTAS; i++)
    {
        if (listadeCartas[i] != NULL)
        {
            free(listadeCartas[i]);
        }
    }

    return 0;
}
