    #include<stdio.h>

    int main(){  
    int num, i, l;


    printf("Digite o um numero para escolher o tamanho do triangulo invertido : \n");    
    scanf("%d", &num);


    

    for (i = 1 ; i <= num; i++)
    {
        for (l = (num + 1); l >= 1 ; l--)
        {
            if (l > i)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
       
    
    
 
        return 0;
    }
    