#include <stdio.h>

void verificar(int num1, int num2){
    if(num1 > num2){
        printf("o resultado da soma e: %d", num1 + num2);
    }else if(num1 == num2){
        printf("o resultado da multiplicacao e: %d", num1 * num2);
    }else{
        printf("o resultado da subtracao e: %d", num1 - num2);
    }
}

int main(){
    int num1, num2;

    printf("digite um numero: ");
    scanf("%d", &num1);

    printf("digite um numero: ");
    scanf("%d", &num2);

    verificar(num1, num2);
}