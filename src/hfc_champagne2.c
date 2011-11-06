#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stock = 180;
    //char order_string[3];
    int order;

    while (stock > 0) {
        printf("%i glasses left\n", stock);

        //scanf("%2s", order_string);

        // atoi 字符串-》整形
        // atof 字符串-》浮点数
        // atol 字符串-》长整形
        //order = atoi(order_string);

        scanf("%i", &order);
        
        printf("%x \n", order);

        stock = stock - order;

        printf("You ordered %i glasses\n", order);
    }

    puts("We're out of stock, baby!");
    return 0;
}
