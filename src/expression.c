#include <stdio.h>

int main(void)
{
    int hour, minute;
    int total_minute;

    hour = 11, minute = 59;

    total_minute = hour * 60 + minute;
    
    printf("Total minute: %d\n", total_minute);
    
    return 0;
}
