#include <stdio.h>

int main() {

    char estado1[2];
    char estado2[2];
    char código1[3];
    char código2[3];
    char nome1[30];
    char nome2[30];
    int populacao1, populacao2, pt1, pt2; //pt = pontos turisticos
    float area1, area2, pib1, pib2;
    
    printf("Estado da primeira carta (A-H): \n");
    scanf("%s", &estado1);
    printf("Codigo da primeira carta (01-04): \n");
    scanf("%s", &código1);
    printf("Nome da primeira cidade: \n");
    fgetc(stdin);
    fgets(nome1, 30, stdin);
    printf("Populacao da primeira cidade: \n");
    scanf("%d", &populacao1);
    printf("Área da primeira cidade (em km²): \n");
    scanf("%f", &area1);
    printf("PIB da primeira cidade: \n");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos na primeira cidade: \n");
    scanf("%d", &pt1);
    printf("Estado da segunda carta (A-H): \n");
    scanf("%s", &estado2);
    printf("Codigo da segunda carta (01-04): \n");
    scanf("%s", &código2);
    printf("Nome da segunda cidade: \n");
    fgetc(stdin);
    fgets(nome2, 30, stdin);
    printf("Populacao da segunda cidade: \n");
    scanf("%d", &populacao2);
    printf("Área da segunda cidade (em km²): \n");
    scanf("%f", &area2);
    printf("PIB da segunda cidade: \n");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos na segunda cidade: \n");
    scanf("%d", &pt2);
    printf("\ncarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, código1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f(km²)\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Tontos Turísticos: %d\n\n", pt1);
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, código2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f(km²)\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d", pt2);

    return 0;
}
