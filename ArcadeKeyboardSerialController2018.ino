
const int UP_BUTTON = 3; //red wire
const int DOWN_BUTTON = 4; // blue wire
const int LEFT_BUTTON = 5; // yellow wire
const int RIGHT_BUTTON = 6; // brown wire
const int SPACE_BUTTON = 7; //unknown

int upButtonState = 0;
int downButtonState = 0;
int leftButtonState = 0;
int rightButtonState = 0;
int spaceButtonState = 0;


void setup() {
  pinMode(UP_BUTTON, INPUT);
  digitalWrite(UP_BUTTON, HIGH);
  
  pinMode(DOWN_BUTTON, INPUT);
  digitalWrite(DOWN_BUTTON, HIGH);
  
  pinMode(LEFT_BUTTON, INPUT);
  digitalWrite(LEFT_BUTTON, HIGH);
  
  pinMode(RIGHT_BUTTON, INPUT);
  digitalWrite(RIGHT_BUTTON, HIGH);
  
  pinMode(SPACE_BUTTON, INPUT);
  digitalWrite(SPACE_BUTTON, HIGH);
  
  Serial.begin(9600);
  
}

void loop() {
  upButtonState = digitalRead(UP_BUTTON);  
  downButtonState = digitalRead(DOWN_BUTTON);
  leftButtonState = digitalRead(RIGHT_BUTTON);
  rightButtonState = digitalRead(LEFT_BUTTON);
  spaceButtonState = digitalRead(SPACE_BUTTON);

  if(upButtonState == LOW)
  {
    Serial.print("\nUP00001");
  }
  if(downButtonState == LOW)
  {
    Serial.print("\nDOWN0001");  
  }
  if(leftButtonState == LOW)
  {
    Serial.print("\nLEFT0001");
  }
  if(rightButtonState == LOW)
  {
    Serial.print("\nRIGHT001");
  }
  if(spaceButtonState == LOW)
  {
    Serial.print("\nSPACE001");
  }
  delay(50);
 /* else
  {
    Serial.print("\nNOKEY001");
  }*/

}
