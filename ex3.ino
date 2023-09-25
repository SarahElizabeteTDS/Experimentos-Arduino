int elefantes = 1;


void setup() {
   Serial.begin(9600);
   elefantesCount();
}


void loop() {
   elefantesCount();
}


void elefantesCount(){
   Serial.print((String) elefantes + " elefantes incomodam muita gente, ");
   elefantes = elefantes + 1;


   delay(2000);


    Serial.println((String) elefantes + " elefantes incomodam muito mais! \n");
   elefantes = elefantes + 1;


   delay(2000);
}
