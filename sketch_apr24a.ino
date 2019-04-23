/* FSR testing sketch. 
Connect one end of FSR to 5V, the other end to Analog 0.
Then connect one end of a 10K resistor from Analog 0 to ground
*/
int fsrAnalogPin = A0; 


int fsrReading;      // the analog reading from the FSR resistor divider
//String quantity = " ";
void setup(void) {
  Serial.begin(9600);   // We'll send dat via the Serial port

}
 
void loop(void) {
  counter();
}

void counter(){
  int count=0;
  fsrReading = analogRead(fsrAnalogPin);
  if(fsrReading>100 && fsrReading<200)// Assuming 600 is the maximum force that can be applied to the handgripper
    {
      count = count+1;
      delay(1000);
      Serial.print(fsrReading);
      Serial.print(count);
    }
   }
