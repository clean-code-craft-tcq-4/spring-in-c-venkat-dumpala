#include "stats.h"

int main()
{

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
float max1 = 0;
float sum = 0;
float avg = 0;
float min1 = 340282346638528859811704183484516925440;

for(int i = 0; i< setlength ; i++;)
{
    sum = sum + numberset[i];
    if (numberset[i] > max1)
        max1 = vnumberset[i];
    if (numberset[i] < min1)
        min1 = vnumberset[i];
}

avg = (float)(sum/setlength);

    s.average = avg;
    s.min = min1;
    s.max = max1;

return  0 ;    
    
}
