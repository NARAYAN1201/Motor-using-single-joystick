int xkey = A0;
int ykey = A1;
int xpos;
int ypos;

//Motor Driver 01

int in1 = 13;
int in2 = 12;
int enA = 11;

int in3 = 10;
int in4 = 9;
int enB = A3;


// Motor Driver 02
int in5 = 8;
int in6 = 7;
int enC = 6;

int in7 = 5;
int in8 = 4;
int enD = A4;


void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);

  pinMode(enA, INPUT);
  pinMode(enB, INPUT);
  pinMode(enC, INPUT);
  pinMode(enD, INPUT);

  pinMode(xkey, INPUT);
  pinMode(ykey, INPUT);

  // Settings pins to HIGH for Max Speed
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(enC, HIGH);
  digitalWrite(enD, HIGH);
  Serial.begin(9600);
  delay(10);

}

void loop() {
  xpos = analogRead(xkey);
  ypos = analogRead(ykey);
  delay(10);

  //Backward
  if (xpos > 564 && ypos < 460) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);

    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);

    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);
    delay(10);
  }

  //Forward
  if (xpos < 460 && ypos > 564) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

    digitalWrite(in5, LOW);
    digitalWrite(in6, HIGH);

    digitalWrite(in7, LOW);
    digitalWrite(in8, HIGH);
    delay(10);
  }

    //Right
    if (ypos > 564 && xpos > 564) {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
   
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
  
      digitalWrite(in5, HIGH);
      digitalWrite(in6, LOW);
  
      digitalWrite(in7, LOW);
      digitalWrite(in8, HIGH);
      delay(10);
    }

    //Left
    if (ypos < 460 && xpos < 460) {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
  
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
  
      digitalWrite(in5, LOW);
      digitalWrite(in6, HIGH);
  
      digitalWrite(in7, LOW);
      digitalWrite(in8, HIGH);
      delay(10);
    }

  // stand
    if (ypos == 513 &&  xpos == 512) {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
  
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
  
      digitalWrite(in5, LOW);
      digitalWrite(in6, LOW);
  
      digitalWrite(in7, LOW);
      digitalWrite(in8, LOW);
      delay(10);
   }


}
