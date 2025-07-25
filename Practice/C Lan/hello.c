#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, sum;

    printf("Enter A\n");
    scanf("%d", &a);
    printf("Enter B\n");
    scanf("%d", &b);
    printf("Enter C\n");
    scanf("%d", &c);
    sum = a + b + c;
    printf("Sum:%d", sum);
    getch();
    return 0;
}