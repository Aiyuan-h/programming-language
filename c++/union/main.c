#include <stdio.h>

int main(void)
{
    union {
       // char s[10];
        int i;
    }x;
    printf("%d",sizeof(x));
    return 0;
}

