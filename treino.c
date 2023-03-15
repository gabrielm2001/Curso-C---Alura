#include <stdio.h>

int main(){

    int numero_secreto = 21;

    int chute;
    int chutes = 0;
    int tentativas = 5;

    printf("Voce tem %d tentativas para vencer\n", tentativas);

    // com o wihle *****
    while (tentativas > 0)
    {

        if (chutes == 0){
            printf("Chute um numero: ");
            scanf("%d", &chute);
            chutes++;
        }else{
            printf("Chute outro numero: ");
            scanf("%d", &chute);
            tentativas--;
            printf("Voce tem %d tentativas \n", tentativas);
            chutes++;
        };

        int chute_maior_que_secreto = (chute > numero_secreto);

        int acertou = (chute == numero_secreto);

        if(acertou){
            if (chutes == 0){
                printf("Parabens! voce ganhou com %d tentativas\n", chutes);
            }else{
                printf("Parabens! voce ganhou com %d tentativas\n", chutes);
            }
            break;
        }else{
            printf("Voce errou mas nao desanime!!\n");
            printf("Seu chute foi %d \n", chute);

            if (chute_maior_que_secreto){
                printf("Chute maior que o numero secreto\n");
            }else{
                printf("Chute menor que o numero secreto\n");
            };
            printf("*****************************\n");
        };

        if (tentativas == 0){
            printf("Infelizmente suas tentativas acabaram\n");

            char escolha;
            printf("Deseja continuar? [S ou N]\n"); 
            scanf("%s", &escolha);

            if (escolha == 'S' || escolha == 's'){
                tentativas = 5;
            }else{
                printf("Obrigado por jogar\n");
            };
        }

    };

}


