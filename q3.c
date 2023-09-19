#include <stdio.h>

int main() {

    int senha_cadastrada, senha_inserida;

    printf("Digite a senha a ser cadastrada (4 digitos): ");
    scanf("%d", &senha_cadastrada);

    while (1) {
        printf("Digite a senha inserida: ");
        scanf("%d", &senha_inserida);

        if (senha_inserida == senha_cadastrada) {
            printf("senha valida!\n");
            break;
        } else {
            printf("senha invalida!\n");
        }
    }

    return 0;
}