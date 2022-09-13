#include <stdio.h>
int main()
{
    double a, b = 0;
    char ch;
    printf("Enter an expression: ");
    scanf_s("%lf", &a);
    while ((ch = getchar()) != '\n') {
        scanf_s("%lf", &b);
        switch (ch) 
        {
        case '+':a = a + b; break;
        case '-':a = a - b; break;
        case '*':a = a * b; break;
        case '/':a = a / b; break;
        }
    }
    printf("Value of expression: %f", a); 
    return 0;
}
