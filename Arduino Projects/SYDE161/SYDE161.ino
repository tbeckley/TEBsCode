//Mandatory includes for use of LCD and Servo Motor respectively
#include<LiquidCrystal.h>
#include<Servo.h>

/*###################
#   LCD Pinout:     #
#   6 -> RS         #
#   7 -> E          #
#   8-11 -> D4-D7   #
#####################*/  

const int ServoPin = 4;
const int PotPin = A0;
const int BtnPin = 5;

Servo srv;
LiquidCrystal lcd(6,7,8,9,10,11);

int timer = 0;

//Runs once - Preperatory function
void setup()
{
    pinMode(BtnPin, INPUT);
    pinMode(PotPin, INPUT);
    
    lcd.begin(16,2);

    srv.attach(4); srv.write(0); //Unlock the box on power up
}

//Repeats - Action functions
void loop()
{
    
  int potValue = analogRead(A0)*2; //Read in the value from the potentiometer
  int mins = (int)(potValue/60) + 1; //Minutes to set potentiometer for

  char topRow[16]; //LCD Screen row to display

  if(timer == 0 ) //Timer is ready to be set
  {
    if(digitalRead(Btn)) //Set the timer
    {
      timer = mins;
      srv.write(90);
    }
    sprintf(topRow, "Set to %d mins", mins);
    
  }
  else if(timer > 0) //Timer ticking down
  {
    delay(950);
    timer--;
    
    if(timer == 0) //Unlock the box
      srv.write(0);

    sprintf(topRow, "Time left: %d mins", timer);
  }
  
  lcd.clear(); lcd.print(topRow); //Clear and write to LCD
  delay(50);
}
