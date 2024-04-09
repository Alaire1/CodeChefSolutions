#include <stdio.h>

int main(void) {
	int numTestCases, i, num, result, j;
    scanf("%d", & numTestCases);
    for (i = 0; i < numTestCases; i++) {
        scanf("%d", &num);
        result = num * (num + 1) /2;
        if ((result % 2 )== 0)
            printf("%i\n", num);
        else
            printf("%i\n", num - 1);
    }
    return (0);
}

