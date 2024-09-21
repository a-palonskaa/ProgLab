#include "result.h"

float result(int K, float resistance[]) 
{   
    assert(resistance);
    assert(isfinite(K));

    float resistance_final = 0;
    float deviation        = 0;

    int i = 0;
    for (i = 0; i < K; i++) 
        resistance_final += resistance[i];
    resistance_final /= K;
    
    int j = 0;
    for (j = 0; j < K; j++) 
        deviation += (resistance[j] - resistance_final)*(resistance[j] - resistance_final);
    deviation = sqrt(deviation)/K;   

    printf("%.4f +- %.4f\n", resistance_final, deviation);

    return resistance_final;
}