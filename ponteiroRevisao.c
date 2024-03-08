#include <stdio.h>

int main(){

    int numero = 1;
    int *ponteiro; // vai armazenar endereço de "numero"

    ponteiro = &numero;
    
    printf("endereco de numero: %p\n", &numero); // % -> diz o endereço da variavel na memoria 
    printf("valor de ponteiro: %p\n", ponteiro);
    printf("valor de numero por meio da variavel ponteiro: %p\n", *ponteiro);
    printf("valor de numero: %d", numero); // valor da variavel na memoria 

    return 0;
}