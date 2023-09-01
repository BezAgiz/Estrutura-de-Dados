//Questão 1  

#include <stdio.h>  
#include <math.h>  

int main(){   

    int a, b, c;   

    printf("Digite um valor: \n");   
    scanf("%d", &a);   

    printf("Digite um valor: \n");   
    scanf("%d", &b);   

    printf("Digite um valor: \n");   
    scanf("%d", &c);   

    if(a > b && a > c){   

    printf("Entre %d, %d e %d, este é o maior %d \n", a,b,c,a);     

    }    

    else if(b > c && b > a){   

    printf("Entre %d, %d e %d, este é o maior %d \n", a,b,c,b);        

    }       

    else {   

    printf("Entre %d, %d e %d, este é o maior %d \n", a,b,c,c);      

    }   

    return(0);  

} 

//Questão 2

#include <stdio.h>  
#include <math.h>  

int main(){   

    int a, b, n=1;

    printf("Digite um valor? \n");
    scanf("%d", a);

    printf("Digite um valor? \n");
    scanf("%d", b);

    while (n<550 && b )
    {
        b * n++;
    }
    
}
