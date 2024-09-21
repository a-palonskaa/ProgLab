#include <stdio.h>
#include "preparation.h"

static const int N = 100;

int preparation(float resistance[])
{
    int M = 0;
    float voltage[N] = {};
    float current[N] = {};
    while(scanf("%f/%f", &voltage[M], &current[M]) == 2 && M < N)
    {
        resistance[M] = (1000 * voltage[M]) / current[M];
        M++;
    }
    return M;
}
