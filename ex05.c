#include <stdio.h>

int main(void) {
    int numTestCases, i, numElements;
    scanf("%d", & numTestCases);
    int dishes, fruits, veggies, fish;
    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d %d %d", & dishes, & fruits, & veggies, & fish);
        if (veggies >= dishes && (fish + fruits) >= dishes)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return (0);
}