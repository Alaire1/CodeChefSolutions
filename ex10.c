#include <stdio.h>

int main(void) {
	 int numTestCases, i, price, startRange, endRange, percent, change;
    scanf("%d", & numTestCases);
    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d %d %d", &price, &startRange, &endRange, &percent);
        change = price * (100 + percent) / 100;
        if (change >= startRange && change <= endRange)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return(0);
}
