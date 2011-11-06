#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[80];
    scanf("%79[^\n]", line);
    printf("Your quote was: %s", line);
    return 0;
}
