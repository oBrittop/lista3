#include<stdio.h>

int main() {
    int num, x;
    num = 1;
    printf("Digite um numero :\n");
    scanf("%d", &x);

    if (x > 0)
    {
            while (num >= 1 && num <= x)
    {
        printf("----- \n");
        printf("%d \n", num);
        num++;
    }

    }
    else  

    num = 1;
    printf("Digite um numero diferente de 0 :\n");
    scanf("%d", &x);

    if (x > 0)
    {
            while (num >= 1 && num <= x)
    {
        printf("----- \n");
        printf("%d \n", num);
        num++;
    }

    }

    


    return 0;
}