#include<stdio.h>

int main() {
    float num, num2, div, i, p;

    printf("Digite um valor: \n");
    scanf("%f", &num);

    printf("Digite outro valor: \n");
    scanf("%f", &num2);

    p = 1;
    i = num2;
    div = num / num2;

    if (num2 > 0)
    {
       while ( p!= 0 && i > 0 )
    {
        printf("A divisao dos numeros na ordem e: %f \n", div);
        
        p--;
    }
    
    }
    else{
        printf("VALOR INVALIDO");
    }
    

    return 0;
}
   