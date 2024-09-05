#include<stdio.h>

int main() {
    int num, x;
    num = 1;
    printf("Digite um numero :\n");
    scanf("%d", &x);

    while (num >= 1 && num <= x)
    {
        printf("----- \n");
        printf("%d \n", num);
        num++;
    }


    return 0;
}