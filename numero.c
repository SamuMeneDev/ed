
#include <stdio.h>

int main()
{
    int num, ant, suce;
    
    printf("Digite um número\n");
    scanf("%d", &num);
    
    ant = num-1;
    suce = num+1;
    
    printf("O antecessor é %d \n", ant);
    printf("O sucessor é %d \n", suce);
    

    return 0;
}