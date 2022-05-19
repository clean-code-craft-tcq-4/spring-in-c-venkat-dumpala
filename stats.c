#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) { }s;  

 //   struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
float max1 = 0;
float sum = 0;
float avg = 0;
float min1 = numberset[0];
for(int i = 0; i< setlength ; i++)
{
    sum = sum + numberset[i];
    if (numberset[i] > max1)
        max1 = numberset[i];
    if (numberset[i] < min1)
        min1 = numberset[i];
}

avg = (float)(sum/setlength);

    s.average = avg;
    s.min = min1;
    s.max = max1;
    
    return s;
}
