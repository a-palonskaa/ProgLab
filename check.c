#include "check.h"

int check( int K, float* resistance, float resistance_final)
{
    assert( resistance != NULL );

    float average_deviation = 0;
    for( int i = 0; i < K; i++ )
    {
        average_deviation += ( resistance[i] - resistance_final );
    }

    return ( fabs( average_deviation )/K < 1e-5 ) 0: 1;
}
