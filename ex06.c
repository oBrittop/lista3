#include<stdio.h>

int main() {
    float num, num2, med;
    int r;

    printf("Apenas valores entre 1 e 10 \n");
    printf("Digite a nota A1: \n");
    scanf("%f", &num);

    printf("Digite a nota A2: \n");
    scanf("%f", &num2);

    med = (num + num2) / 2;

    if (num <= 10 && num2 <= 10)
    {
       printf("Sua media e %f \n", med);
    
    }else if(num >= 10 && num2 >= 10)
    {
        printf("Digite uma nota valida");
    }

        printf("Deseja calcular novamente? / 0 = sim e 1 = nao \n ");
        scanf("%d",&r);

    switch (r)
    {

    case  0 :  
    printf("Apenas valores entre 1 e 10");
    printf("Digite a nota A1: \n");
    scanf("%f", &num);

    printf("Digite a nota A2: \n");
    scanf("%f", &num2);


    med = (num + num2) / 2;

    if (num <= 10 && num2 <= 10)
    {
       printf("Sua media e %f \n", med);
    
    }else if(num >= 10 && num2 >= 10)
    {
        printf("Digite uma nota valida \n");
    }

        break;
    
        default: printf("Programa finalizado");
        
        break;
    }
    
    

    return 0;
}