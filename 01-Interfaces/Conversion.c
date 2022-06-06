#include "Conversion.h"

double fahrACelcius(int fahr)
{
    return (fahr-32)/1.8;
}

double celciusAFahr(int celsius)
{
    return (celsius * 1.8)+32;
}
