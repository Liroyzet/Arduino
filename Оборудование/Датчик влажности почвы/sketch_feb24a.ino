#define solPin  2 // порт подключения датчика
#define ledPin 13 // порт подключения светодиода

int sol;

void setup(){
   Serial.begin(9600);

   pinMode(solPin, INPUT);
   pinMode(ledPin, OUTPUT);
}

void loop(){
   Serial.print("sol = ");
   Serial.println(digitalRead(solPin));

   if (digitalRead(solPin) == LOW) { digitalWrite(ledPin, LOW); }
   if (digitalRead(solPin) == HIGH) { digitalWrite(ledPin, HIGH); }

   delay(1000);
}