#include <stdio.h>

//Variavel primeira carta:


int main(){

    int populacao;
    float area;
    float Pib;
    char nome[50];
    int pontosturisticos;
    char estado;
    char codigo[4];

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s\n", nome);

    printf("Digite o codigo: \n");
    scanf("%s\n", codigo);

    printf("Digite a populacao: \n");
    scanf("%d\n", populacao);

    printf("Digite a area: \n");
    scanf("%s\n", area);

    printf("Digite o pib: \n");
    scanf("%s\n", Pib);

    printf("Digite os pontos turisticos: \n");
    scanf("%s\n", pontosturisticos);

    return 0;

  //segunda carta:


    printf("Digite o estado: \n");
    scanf("%d\n", estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s\n", nome);

    printf("Digite o codigo: \n");
    scanf("%s\n", codigo);

    printf("Digite a populacao: \n");
    scanf("%s\n", populacao);

    printf("Digite a area: \n");
    scanf("%f\n", area);

    printf("Digite o pib: \n");
    scanf("%f\n", Pib);

    printf("Digite os pontos turisticos: \n");
    scanf("%d\n", pontosturisticos);

    return 0;
}
