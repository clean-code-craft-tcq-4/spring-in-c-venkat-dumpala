#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
float max = 0;
float sum = 0;
float avg = 0;
float min = 340282346638528859811704183484516925440;

for(int i = 0; i< setlength ; i++;)
{
    sum = sum + numberset[i];
    if (numberset[i] > max)
        max = vnumberset[i];
    if (numberset[i] < min)
        min = vnumberset[i];
}

avg = (float)(sum/setlength);

    s.average = avg;
    s.min = min;
    s.max = max;
    
