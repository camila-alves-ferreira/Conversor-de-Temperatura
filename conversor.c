#include <stdio.h>
#include <locale.h>
void main() {
    float celsius, fahren, kelvin;
    int opcao;
    setlocale(LC_ALL, "Portuguese");
    
    printf("------------------------------------------------\n");
    printf("\t\tCONVERSOR DE TEMPERATURA\n");
    printf("------------------------------------------------\n");
    printf("Digite a temperatura que você deseja converter em graus Celsius(°C):\n");
    scanf("%f", &celsius);
    
    system("clear");
    
    printf("Em qual escala de temperatura?\n1. Kelvin\n2. Fahrenheit\n\nOpção = ");
    scanf("%d", &opcao);
    
    system("clear");
    
    printf("------------------------------------------------\n");
    switch(opcao) {
    case 1:
        kelvin = celsius + 273;
        printf("\nA temperatura convertida em Kelvin é (K): %.1f", kelvin);
        break;
    case 2:
        fahren = (celsius * 9 / 5) + 32;
        printf("\nA temperatura convertida em graus Fahrenheit é (°F): %.1f", fahren);
        break;
    default:
        printf("\nOpção inválida!");
        break;
    }
    
}