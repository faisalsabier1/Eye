//Controlling LED in parallel with an N-channel MOSFET el 
//The reason why parallel connection is picked up beacuse 
//if it's desired to control one eye without affecting the other 
//parallel connection is the solution here

void setup() {
  pinMode(1, OUTPUT); //Setting gate for MOSFET 1
  pinMode(2, OUTPUT); //Setting gate for MOSFET 2

}

void loop() {
  digitalWrite(2, HIGH); //Turning on LED 2
  digitalWrite(1, HIGH); //Turning on LED 1
  delay(2000); //How much time is desired to have the leds on
  
  // this part is not necessary if it's not desired to have
  // blinking eyes the next part from line 19 till 21 can be removed
  digitalWrite(2, LOW); //Turning off LED 2
  digitalWrite(1, LOW); //Turning on LED 1
  delay(2000);//How much time is desired to have the leds off
}


// the code can be rearranged to whatever it's desired by changing the high/low signal
//portion of the code and with manipulating with the delay time 
