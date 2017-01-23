/**********************************************************************************
**                                                                               **
**                               Blink                                           **
**                                                                               **
** Daniel Montañés Martínez                                           23/01/2017 **
**********************************************************************************/

//******************************** Includes ***************************************

//*******************************  Variables **************************************

//********************************** Setup ****************************************
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
//*********************************** Loop ****************************************
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
//********************************* Funcions **************************************
