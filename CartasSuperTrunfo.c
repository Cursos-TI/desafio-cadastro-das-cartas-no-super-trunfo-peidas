#include <stdio.h>

int main (){
    int população1, pontosT1;
    float area1, pib1;
    char estado1, codigo1[4], nome1[50];
    //coloquei tudo junto pra ser mais facil de ler
    int população2, pontosT2;
    float area2, pib2;  
    char estado2, codigo2[4], nome2[50];

    //anotação para facilitar na hora de codar: %d para int, %f para float, %c para char e %s para char[]

    printf("-- Cadastro da primeira carta --\n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da carta: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", nome1);

    printf("Populaçao da cidade: \n");
    scanf("%d", &população1);

    printf("Área em km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosT1);

    //fim do cadastro da primeira carta

    printf("-- Cadastro da segunda carta --\n");

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código da carta: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nome2);

    printf("Populaçao da cidade: \n");
    scanf("%d", &população2);

    printf("Área em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosT2);

    //fim do cadastro da segunda carta

    printf(" -- Dados da primeira carta: -- \n"); 
    printf("Estado:  %c \nCódigo da carta: %s \nNome da Cidade: %s \n", estado1, codigo1, nome1);
    printf("População da Cidade: %d \nÁrea da Cidade em km²: %f \nPIB da Cidade: %f \n", população1, area1, pib1);
    printf("Número de Pontos Turísticos da cidade: %d \n", pontosT1);

    printf(" -- Dados da segunda carta: -- \n"); 
    printf("Estado:  %c \nCódigo da carta: %s \nNome da Cidade: %s \n", estado2, codigo2, nome2);
    printf("População da Cidade: %d \nÁrea da Cidade em km²: %f \nPIB da Cidade: %f \n", população2, area2, pib2);
    printf("Número de Pontos Turísticos da cidade: %d \n", pontosT2);

    return 0;

}
