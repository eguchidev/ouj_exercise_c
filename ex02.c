#include <stdio.h>

int main(void)
{
    int age;

    printf("how old are you ? > ");
    scanf("%d", &age);

    /* print age of 5 years later */
    printf("5 years later, you are %d old. \n", age + 5);

    return 0;
}