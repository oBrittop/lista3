#include<stdio.h>

    int main(){  
    float a =8, b, r, amais = a + 10;



    printf("Qual o valor da mercadoria ? \n");
    scanf("%f", &b);
    printf("o total de  mercadorias eh 8, deseja mais mercadoria ? Digite 0 para sim e 1 para nao  : \n");
    scanf("%f", &r);


    if (r != 0)
    {

    printf(" valor total em estoque e %f a media de valor das mercadorias eh %f.", a, b);

 
    } else{
    

    printf("Digite o valor de cada mercadoria : \n ");
    scanf("%f", &b);

    printf(" valor total em estoque e %f a media de valor das mercadorias eh %f.", amais, b);
}
 
        return 0;
    }
    