#include <stdio.h>

int main() {
    char estado;
    char codigo;
    char nome[20];
    int população;
    float area;
    float pib;
    int turismo;

    printf("Digite o estado: \n");
    scanf("%c", &estado);
    printf("O estado é: %c", estado);

    printf("Digite o seu codigo: \n");
    scanf("%i", &codigo);
    printf("O codigo é: %i", codigo);

    printf("Digite nome: \n");
    scanf("%s", &nome);
    printf("A nome é: %s, nome");

    printf("Digite a população: \n");
    scanf("%d", &população);
    printf("A população é: %d, população");

    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("A area é: %f, area");

    printf("Digite o pib: \n");
    scanf("%f", &pib);
    printf("O pib é: %f, pib");

    printf("Digite o turismo: \n");
    scanf("%d", &turismo);
    printf("O turismo é: %d, turismo");



    return 0;
}
