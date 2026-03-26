#include <stdio.h>

float calculo(int op, int a, int b) {
    switch (op) {
        // SOMA
        case 1:
            return a + b;
            break;
        // SUBTRAÇÃO
        case 2:
            return a-b;
            break;
        // MULTIPLICAÇÃO
        case 3:
            return a*b;
            break;
        // DIVISÃO
        case 4:
            return a/b;
            break;
        default:
            return -1;
            break;
    }
}

int main() {
    char sinais[] = {43, 45, 42, 47};
    int op, a, b;

    do {
        printf("=== OPERAÇÕES MATEMÁTICAS ===\n");
        printf("[1] + ADIÇÃO\n[2] - SUBTRAÇÃO\n[3] %c MULTIPLICAÇÃO\n[4] %c DIVISÃO\n", sinais[2], sinais[3]);
        printf("[0]  Sair\n");
        printf("Selecione a sua operação: ");
        scanf("%d", &op);
        if(op > 0 && op <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%d", &a);
            printf("Digite o segundo número: ");
            scanf("%d", &b);
            if(op == 4) {
                printf("%d %c %d = %.2f\n", a, sinais[op-1], b, calculo(op, a, b));
            } else {
                printf("%d %c %d = %d\n", a, sinais[op-1], b, (int) calculo(op, a, b));
            }
        }
    } while (op != 0);

    printf("====== FIM ======\n");

    return 0;
}