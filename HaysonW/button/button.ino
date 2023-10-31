static unsigned int myButton = 3;//assign port to No.3

void setup() {
  Serial.begin(9600); // starts serial monitor 
  pinMode(myButton, INPUT);// stars button
}

void loop() {
  Serial.print("myButton:");//prints "myButton:" to serial monitor
  Serial.println(digitalRead(myButton));//reads the button value 
}