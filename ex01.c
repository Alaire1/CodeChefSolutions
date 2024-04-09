#include <stdio.h>

int main(void) {
    int numTestCases, i, numElements;
    scanf("%d", &numTestCases);
    
     int array[numTestCases][3];
        for (i = 0; i < numTestCases; i++) {
            scanf("%d %d %d", &array[i][0], &array[i][1], &array[i][2]);
            if (array[i][0] > array[i][2])
                printf("%s\n", "Too Late");
            else if (array[i][0] < array[i][1])
                printf("%s\n", "Too Early");
            else
                printf("Take second dose now\n");
    }
    return 0;
}