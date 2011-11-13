#include <stdio.h>

int main()
{
    int counter = 1;
    while (counter < 11) {
        printf("%i green bottles, hanging on a wall\n", counter);
        counter++;
    }

    int i;
    for (i = 1; i < 11; i++) {
        printf("%i green bottles, hanging on a wall\n", i);
    }

    return 0;
}
