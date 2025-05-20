#include <stdio.h>

int main()
{  
    int num1, num2;
    char operacao;
    printf("Digite dois números:");
    scanf("%d %d", &num1, &num2);
    printf("Digite um operador:"); 
    fflush(stdin);
    scanf("%c", &operacao); fflush(stdin);
    
    switch(operacao){
        case '+':
        printf("%d %d", num1 + num2);
        break;
        case '-':
        printf("%d %d", num1 - num2);
        break;
        case '*':
        printf("%d %d", num1 * num2);
        break;
        case '/':
        printf("%d %d", num1 / num2);
        break;
        default:
        printf("Operação inválida");
    }
    
    
    return 0;
}