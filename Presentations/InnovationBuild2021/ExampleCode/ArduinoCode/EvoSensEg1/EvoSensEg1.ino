/* Using EvoSens Board to measure battery voltage
 * By Duleepa J Thrimawithana
 * Revision 1.1
 * 07 June 2021 
 */

void setup() {
  // Setup serial communication with a PC via USB connection
  Serial.begin(9600);
  Serial.println("Serial Coms with PC Initiated");
  Serial.println("");
}

void loop() {
  
  // Read voltage on A0 and convert to actual voltage
  float Voltage = (14.0*5)*analogRead(A0)/1023;

  // Display both voltage and current on the PC
  Serial.print("Voltage: ");
  Serial.println(Voltage);

  // Re-do the above operations every 1s
  delay(1000);
  
}
