#include <stdio.h>

int main()
{  
    int num1, num2;
    char operacao;
    printf("Digite dois números e um operador (=, -, *, /):");
    scanf("%d %d %c", &num1, &num2, &operacao);fflush(stdin);
    
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
