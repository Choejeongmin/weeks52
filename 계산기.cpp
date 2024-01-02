#inclnde <studio.h>

int main()
{
    double num1, num2
    char op;

    printf("첫번째 수 : ");
    scanf("%d", &num1);

    printf("[+, -, *, / ] :")
    fflush(stdin);
    op = getchar();

    printf("두번째 수 : ");
    scanf("%d", &num2);

    switch ( op)
    {
        case '+':
            printf(" %d + %d = %d \n", num1, num2, num1 + num2);
            break;
        case '-':
            printf(" %d - %d = %d \n", num1, num2, num1 - num2);
            break;
        case '*':
            printf(" %d * %d = %d \n", num1, num2, num1 * num2);
            break;
        case '/':
            printf(" %d / %d = %d \n", num1, num2, num1 / num2);
            break;
    }
    
    return 0;
}