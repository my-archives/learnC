#include <stdio.h>

int main()
{
    char tracks[][81] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Two Jima"
    };

    printf("tracks[0]: %s \n", tracks[0]);
    printf("tracks[3]: %s \n", tracks[3]);

    return 0;
}
