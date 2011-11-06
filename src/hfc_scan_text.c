#include <stdio.h>
#include <stdlib.h>

int main()
{
    char username[9];
    char first_name[10], last_name[10];
    scanf("%s", username);
    printf("Your username is '%8s'\n", username);
    scanf("%50s %50s", first_name, last_name);
    printf("First name: %s\n", first_name);
    printf("Last name: %s\n", last_name);
    return 0;
}
