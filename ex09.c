#include <stdio.h>

int main()
{
    int numTestCases, num1, num2, i;
    scanf("%d", & numTestCases);
    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d", & num1, & num2);
        if (num2 > num1 || num2 == 0)
            printf("%d\n", num1);
        else
            printf("%d\n", (num1 % num2));
    }
    return (0);

}