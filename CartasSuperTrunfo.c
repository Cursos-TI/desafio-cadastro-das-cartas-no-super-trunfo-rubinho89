#include <stdio.h>

//Variavel primeira carta:


int main(){

  int populacao;
  float areaemkm;
  float pib;
  char nome[50];
  int pontosturisticos;
  char estado;
  char codigo[50];
  float densidadepopulacional;
  float PIBpercapita;

  printf("Digite o estado: \n");
  scanf("%s\n",estado);

  printf("Digite o nome da cidade: \n");
  scanf("%s\n",nome);

  printf("Digite o codigo: \n");
  scanf("%s\n",codigo);

  printf("Digite a populacao: \n");
  scanf("%d",populacao);

  printf("Digite a area em km: \n");
  scanf("%s\n",areaemkm);

  printf("Digite o pib: \n");
  scanf("%s",pib);

  printf("Digite os pontos turisticos: \n");
  scanf("%d",pontosturisticos);

  float pibPerCapita = calcularPIBPerCapita(pib, populacao);

 printf("PIB per capita: R$ %.2f mil\n", pibPerCapita);

  

//Carta 2


   int populacao2;
  float areaemkm2;
  float pib2;
  char nome2[50];
  int pontosturisticos2;
  char estado2;
  char codigo2[50];
  float densidade populacional2;
  float PIB per capita;

  printf("Digite o estado: \n");
  scanf("%s\n",estado2);

  printf("Digite o nome da cidade: \n");
  scanf("%s\n",nome2);

  printf("Digite o codigo: \n");
  scanf("%s\n",codigo2);

  printf("Digite a populacao: \n");
  scanf("%d\n",populacao2);

  printf("Digite a area em km: \n");
  scanf("%s\n",areaemkm2);

  printf("Digite o pib: \n");
  scanf("%s\n",pib2);

  printf("Digite os pontos turisticos: \n");
  scanf("%d",pontosturisticos2);

   

    

    return 0;
}
