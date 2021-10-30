### Mapf version 1

# functions:
### mapf()
        #include <Mapf.h>

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


### mapf_ADC() for all kinds of ADC
        #include <Mapf.h>
        #define ADC_pin A0
        double value=333;// adc reading
        uint8_t bit_resolution=10;// for example 10 bit adc 
        double output_min=0;// 0v
        double output_max=5; //5v
        double result=0;
        void setup(){
            pinMode(ADC_pin,INPUT);
            Serial.begin(9600);
            
        }
        void loop(){
            result=mapf_ADC(analogRead(ADC_pin));// default for 10 bit ADC and 0 to 5 V voltage
            //result=mapf_ADC(analogRead(ADC_pin),output_min,output_max,bit_resolution);// full example
            //result=mapf_ADC(analogRead(ADC_pin),0,3.3,12); // example for 12 bit ADC 0 to 3.3 voltage 
            Serial.println(result);
            delay(100);
        }
        