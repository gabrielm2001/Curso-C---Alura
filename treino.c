// #include <stdio.h>

// int main(){

//     int numero_secreto = 21;

//     int chute;

//     printf("Chute um numero: ");
//     scanf("%d", &chute);
//     printf("O numero chutado foi: %d", chute);

//     return 0;

// }




// Desafio

#include <stdio.h>

int main(){

    int number_one;
    int number_two;

    printf("Digite o primeiro numero ");
    scanf("%d", &number_one);

    printf("Digite o segundo numero");
    scanf("%d", &number_two);

    int result = number_one * number_two;

    printf("O resultado da multiplicacao do numero %d e %d foi: %d", number_one, number_two, result);

}


