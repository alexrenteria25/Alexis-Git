#include <stdio.h>

int main() {
    //Declaramos las variables 
    int edad;         //Variable para la edad   
    float altura;       //Variable para la altura 
    double peso;         //Variable para el peso

   //con el printf damos un mensaje de bienvenida
    printf("¡Bienvenido al programa de entrada de datos!\n");

    //solicitamos la edad y con el scanf leemos este dato
    printf("Por favor, introduce tu edad: ");
    scanf("%d", &edad); 

    //solicitamos la altura y  leemos este dato
    printf("Por favor, introduce tu altura (en metros): ");
    scanf("%f", &altura); 

    //solicitamos y leemos el peso
    printf("Por favor, introduce tu peso (en kilogramos): ");
    scanf("%lf", &peso);  

    //Mostramos los valores ingresados
    printf("\nDatos ingresados:\n");
    printf("Edad: %d años\n", edad);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.2f kilogramos\n", peso);

    //Finalizamos el programa
    return 0;
}
