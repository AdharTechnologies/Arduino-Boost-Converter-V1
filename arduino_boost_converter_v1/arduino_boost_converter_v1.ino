/*  
Embedded CTG
Arduino-Boost-Converter-V1

Description:
Enter the desired PWM value using the serial monitor 
*/

// Declaring variables
const int M2 = 9; // Gate pin of MOSFET
unsigned int pwm;
unsigned int pwm_M2; //global variable to be used as signal

void setup() {
  Serial.begin(9600);
 
  Serial.println("Program Started");
  delay(2000);

  // Defining pin modes
  pinMode(M2, OUTPUT); // D9
}

void loop() {

  //Reading value of PWM from serial monitor
  //Enter any value between (1-255)
  pwm = Serial.parseInt();
  if (pwm>0){
    pwm_M2 = pwm;
  }

  Serial.print("PWM |"); Serial.println("M2");
  Serial.print(pwm); Serial.print(" | ");  Serial.println(pwm_M2);
  analogWrite(M2, pwm_M2);

}


