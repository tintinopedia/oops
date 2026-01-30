#include <stdio.h>

int main()
{
    int a;
    char name[15];
    
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The value entered by the user is %d.\n", a);
    
    printf("Enter a name: ");
    scanf("%s", name);
    printf("The users name is %s.\n", name);
    
    return 0;
}