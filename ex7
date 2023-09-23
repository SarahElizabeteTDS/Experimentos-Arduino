const int PIN_LED_RED = 3;
const int PIN_LED_YELLOW = 5;


char led;


void setup() {


   pinMode(PIN_LED_RED, OUTPUT);
   pinMode(PIN_LED_YELLOW, OUTPUT);
   Serial.begin(9600);
}


void loop() {
   for (int intensidade=0; intensidade <= 255;intensidade+=10){
      analogWrite(PIN_LED_RED, intensidade); // Acende led


      if(intensidade == 255){
         intensidade = 0;
      }


      delay(500);
   }


}



