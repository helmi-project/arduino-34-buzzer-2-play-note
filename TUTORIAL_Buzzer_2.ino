/*
   TUTORIAL PASSIVE BUZZER PADA ARDUINO
   D3 -> Passive Buzzer +
*/

#define pinBuzzer 3 //buzzer pada pin D3

int jeda=200;

void setup() {
  pinMode(pinBuzzer, OUTPUT); //set menjadi output
}

void loop() {
    playTone(261.63, 300); //nada C
    delay(jeda); 
    playTone(293.66, 300); //nada D
    delay(jeda); 
    playTone(329.63, 300); //nada E
    delay(jeda); 
    playTone(349.23, 300); //nada F
    delay(jeda); 
    playTone(392, 300); //nada G
    delay(jeda); 
    playTone(440, 300); //nada A
    delay(jeda); 
    playTone(493.88, 300); //nada B 
    delay(jeda); 
    playTone(523.25, 300); //nada C' 
    delay(jeda); 

}


void playTone(long note, long millisecond) {
  long frequency = note;
  long length = millisecond;
  if (frequency > 0) {
    long delayValue = 1000000 / frequency / 2; 
    long numCycles = frequency * length / 1000; 
    for (long i = 0; i < numCycles; i++) { 
      digitalWrite(pinBuzzer, HIGH); 
      delayMicroseconds(delayValue); 
      digitalWrite(pinBuzzer, LOW); 
      delayMicroseconds(delayValue); 
    }
  }
  else delay(millisecond);
}
