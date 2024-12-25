#define buton 9

byte led_pins[] = {2, 3, 8, 4, 7, 6, 5};
int dicePatterns[7][7] = {
  {0, 0, 0, 0, 0, 0, 1}, // 1
  {0, 0, 1, 1, 0, 0, 0}, // 2
  {0, 0, 1, 1, 0, 0, 1}, // 3
  {1, 0, 1, 1, 0, 1, 0}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 1, 1, 1, 1, 1, 0}, // 6
  {0, 0, 0, 0, 0, 0, 0}  // BLANK
};
byte blank = 6;

byte segment[] = {A5, A4, A3, A2};   // A, B, C, D
int num[6][4] = 
{
  
      //{A, B, C, D},
      //{0, 0, 0, 0},  
      {1, 0, 0, 0},
      {0, 1, 0, 0},
      {1, 1, 0, 0},
      {0, 0, 1, 0},

      {1, 0, 1, 0}, 
      {0, 1, 1, 0},
      //{1, 1, 1, 0},
      //{0, 0, 0, 1},
      //{1, 0, 0, 1}, 
  
  
};

void setup() {
  for (byte i = 0; i < 7; i++) {
    pinMode(led_pins[i], OUTPUT);
    digitalWrite(led_pins[i], LOW);
  }
  pinMode(buton, INPUT);
  
  for(byte i=0; i<4; i++){
    pinMode(segment[i], OUTPUT);
  }
}

void loop() {
  buttonControl();
}

void buttonControl() {
  if (digitalRead(buton) == HIGH)
    rollTheDice();
  delay(100);
}

void rollTheDice() {
  byte result = 0;
  byte result2 = 0;
  byte lengthOfRoll = random(5, 10);
  for (byte i = 0; i < lengthOfRoll; i++) {
    result = random(0, 6);
    result2 = random(0, 6);
    show(result,result2);
    delay(50 + i * 10);
  }
  
}

void show(byte r, byte r2) {
  for (byte i = 0; i < 7; i++) {
    digitalWrite(led_pins[i], dicePatterns[r][i]);
  }
  
    
  for(byte i=0; i<4; i++){
      digitalWrite(segment[i], num[r2][i]);
    }
}
