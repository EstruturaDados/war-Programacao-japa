#include <stdio.h>
#include <string.h>

/*
    Estrutura Territorio:
    Representa um território do jogo WAR,
    contendo nome, cor do exército e número de tropas.
*/
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    // Vetor estático que armazena os 5 territórios
    struct Territorio territorios[5];

    printf("=== CADASTRO DE TERRITORIOS ===\n\n");

    // Entrada de dados dos 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do Territorio %d\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf("%s", territorios[i].nome);

        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("----------------------------------------\n");
    }

    // Exibição dos territórios cadastrados
    printf("\n=== TERRITORIOS CADASTRADOS ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercicio: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("----------------------------------------\n");
    }

    return 0;
}
