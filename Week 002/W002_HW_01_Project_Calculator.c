#include <stdio.h>

void addition()
{
    int a, b;
    
    printf("Enter your first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    printf("Sum of both numbers is: %d \n", a + b);
}

void difference()
{
    int c, d;
    
    printf("Enter your first number: ");
    scanf("%d", &c);

    printf("Enter your second number: ");
    scanf("%d", &d);

    printf("Difference of both numbers is: %d \n", c - d);
}

void product()
{
    int e, f;
    printf("Enter your first number: ");
    scanf("%d", &e);

    printf("Enter your second number: ");
    scanf("%d", &f);

    printf("Product of both numbers is: %d \n", e * f);
}

void division()
{
    float g, h;
    printf("Enter your dividend value: ");
    scanf("%f", &g);

    printf("Enter your divisor value: ");
    scanf("%f", &h);

    if (h != 0)
        printf("Division of both numbers is: %.2f \n", g / h);
    else
        printf("Cannot divide by zero.\n");
}

int main()
{
    int select;
    printf("What arithmatic operation do you want to perform?\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &select);
    
    if(select == 1)
        addition();
    else if(select == 2)
        difference();
    else if(select == 3)
        product();
    else if(select == 4)
        division();
    else
        printf("You have entered the wrong choice. \n");
    
    return 0;
}
