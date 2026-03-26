#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("O número %d é PAR", num);
    } else {
        printf("O número %d é IMPAR", num);
    }
    printf("\n");


    return 0;
}

