#include "Mapf.h"

//map function always will return data type double default map arduino built in returns int
double value=1024,in_min=0,in_max=1023,out_min=0,out_max=5;


void setup() {
  Serial.begin(9600);
  if (Serial==true){
  Serial.println(mapf(value,in_min,in_max,out_min,out_max));
  }


}

void loop() {

}
