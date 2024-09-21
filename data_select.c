#include "data_select.h"
#include <math.h>

int data_select (int M, float resistance[])
{
    float resistance_average = 0, resistance_amount = 0;
    for (int i = 0; i < M; i++)
        resistance_amount += *(resistance + i);

    resistance_average = resistance_amount / (float)M;
    int end = 0, begining = 0;
    float* end_resistance = resistance + M - 1;
    M = M - 2;
    while (1)
    {
        while (fabs ((*(resistance + begining) / resistance_average) - 1) <= 0.03)
            {begining++;}
        while (fabs ((*(end_resistance - end) / resistance_average) - 1) > 0.03)
            {end++;}
        if ((end + begining) > M)
            break;
        *(resistance + begining++) = *(end_resistance - end++);
    }
    return begining;
}

