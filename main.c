#include <stdio.h>

#include "preparation.h"
#include "data_select.h"
#include "result.h"
#include "check.h"

int main() {
    float resistance[100] = {};

    int measurements_cnt = preparation(resistance);
    int selected_measurments_cnt = data_select(measurements_cnt, resistance);
    float resistance_final = result(selected_measurments_cnt, resistance);
    int result_validation = check(measurements_cnt, resistance, resistance_final);

    return 0;
}
