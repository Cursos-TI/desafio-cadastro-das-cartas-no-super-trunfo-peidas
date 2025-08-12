#include <stdio.h>

int main (){
    int população1, pontosT1;
    float area1, pib1;
    char estado1, codigo1[3], nome1[50];

    int população2, pontosT2;
    float area2, pib2;  
    char estado2, 

    //anotação para facilitar na hora de codar: %d para int, %f para float, %c para char e %s para char[]

    printf("-- Cadastro da primeira carta --\n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da carta: \n");
    scanf("%s", &codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", &nome1);

    printf("Populaçao da cidade: \n");
    scanf("%d", &população1);

    printf("Área em km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosT1);

    return 0;

}
