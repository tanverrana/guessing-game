#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int hidden = rand() % 100;
    printf("%d\n", hidden);
    return 0;
}