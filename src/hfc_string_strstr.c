#include <stdio.h>
#include <string.h>

int main()
{
    char s0[] = "dysfunctionl";
    char s1[] = "fun";
    
    if (strstr(s0, s1)) {
        puts("I found the fun in dysfunctionl!");
    }

    return 0;
}
