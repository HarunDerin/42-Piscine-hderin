#include <stdio.h>
#include "ft_point.h"

int main()
{
    t_point p1 = {2, 3};
    t_point p2 = {4, 5};

    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2: (%d, %d)\n", p2.x, p2.y);

    return 0;
}