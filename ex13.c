    #include<stdio.h>

    int main(){  
    int num, i;
    i = 1;


    printf("Digite um numero entre 1 a 10 para exibir sua tabuada \n");    
    scanf("%d", &num);
    if (num <=10)
    {
            while (i <= 10)
    {
        printf("%d x %d = %d \n", num, i, num * i);
        i++;
    

    }
       
    }else printf("Tente novamente com um numero valido!!!");
    
 
        return 0;
    }
    
