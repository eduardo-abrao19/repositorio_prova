#include <stdio.h>

void verificar(int num1){
    for(int i = num1; i >= 1; i--){
        num1 = i * num1;
    }
    printf("o resultado e: %d", num1);
}

int main(){
    int num1;

    printf("digite um numero: ");
    scanf("%d", &num1);

    verificar(num1);
}