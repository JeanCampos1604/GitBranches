#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    printf("Calculadora simples(+,-,/,*)\n");
    float num1,num2,result;
    char op;
    printf("Digite a conta da seguinte forma: N�mero Operador N�mero\n");
    printf("Valores: ");
    scanf("%f %c %f", &num1,&op,&num2);

    switch(op)
    {
    case '+':
        result = num1 + num2;
    break;

    case '-':
        result = num1 - num2;
    break;

    case '*':
        result = num1 * num2;
    break;

    case '/':
        if (num1==0 || num2==0) {
        	printf("N�o existe divis�o por 0");
        	return;
		} else {
			result = num1 / num2;
		}
    break;

    }


    printf("Resultado = %.2f", result);
    
    printf("A aula de t�picos � legal");

    return 0;

    }
