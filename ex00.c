#include <stdio.h>

int main(void) {
    int numTestCases, i, numElements;

    scanf("%d", &numTestCases);

    int elements[numTestCases][3];

    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d %d", &elements[i][0], &elements[i][1], &elements[i][2]);
        int result = (elements[i][1] - elements[i][0]) / elements[i][2];
        printf("%i\n", result);
    }
    return 0;

}