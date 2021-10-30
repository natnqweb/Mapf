#pragma once
#ifndef MAPF_H
#define MAPF_H
//by default if you feed only 1 value to function it will transform analogreading from uno analog pin to 0 - 5V reading 
// extension of arduino map function 
double mapf(double x, double in_min=0, double in_max=1023, double out_min=0, double out_max=5);

// mapf_bit will transform whatever resolution of analog read or your input is to provided  output range as out_min and out_max
double mapf_ADC(double value,double out_min=0,double out_max=5,unsigned char input_bit_resolution=10);
#endif
