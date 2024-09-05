#include<stdio.h>

int main() {
    float num, num2, div, i, p;



    do
    {
        printf("Digite dois numeros, nao pode ser zero!");
        scanf(" %f %f ", &num, &num2);
    } while (num2 < 0);
    
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
    else{ printf("VALOR INVALIDO");}



   
    
    

    return 0;
}