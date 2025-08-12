#include <stdio.h>

int main (){
    int população1, pontosT1;
    float area1, pib1;
    char estado1;
    char codigo1[3];
    char nome1[50];

    int população2, pontosT2;
    float area2, pib2;
    char estado2;
    char codigo2[3];
    char nome2[50];

    //anotação para facilitar na hora de codar: 
%d para int, %f para float, %c para char e %s para char[]

    printf("-- Cadastro da primeira carta --");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da carta: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", &nome1);

    printf("Populaçao da cidade: \n");
    scanf("%d", população1)

    return 0;

}
