#include <stdio.h>

int main()
{
    int x = 0, y = 0;

    while (x < 5) {
        printf("%i%i ", x, y);
        x = x + 1;
    }

    puts("\r");

    return 0;
}
