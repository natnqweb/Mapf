#include "Mapf.h"

double mapf(double x, double in_min, double in_max, double out_min, double out_max)
{

    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
double mapf_ADC(double value,double out_min,double out_max,unsigned char input_bit_resolution)
{
	double in_min=0;
	double in_max=2<<input_bit_resolution-1;
	   return (value - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
