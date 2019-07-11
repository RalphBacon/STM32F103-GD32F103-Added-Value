/*
 * Simple double blink for the STM32F103C8T6
 * 
 * Note: LED is ON when PC13 is LOW
 * 
 * Compile settings (Tools, Boards)
 * 
 * Board: Generic STM32F103C series
 * Variant: STM32F103C8 (20k RAM, 64k Flash)
 * Upload Method: Serial
 * CPU Speed: 72MHz
 * Optimise: Smallest (default)
 * Port: Your COM Port the USB-to-Serial is on
 * Programmer: Makes no difference
 */

void setup() {
  Serial.begin(9600);
  
  // initialize digital pin PC13 (built in LED) as an output.
  pinMode(PC13, OUTPUT);

  Serial.println("Setup completed");
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PC13, LOW); 
  delay(100);             
  digitalWrite(PC13, HIGH);
  delay(250);   

  digitalWrite(PC13, LOW);  
  delay(1000);            
  digitalWrite(PC13, HIGH); 
  delay(500);

  Serial.println("Flashing!");
}
