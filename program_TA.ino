#define leda 3 
#define ledb 4 
#define ledc 5 
#define ledd 6 
#define lede 7 
#define ledf 8 
#define ledg 9
#define ledh 10
#define ledi 11

void setup(){
  Serial.begin(9600);
  pinMode(leda, OUTPUT);
  pinMode(ledb, OUTPUT);
  pinMode(ledc, OUTPUT);
  pinMode(ledd, OUTPUT);
  pinMode(lede, OUTPUT);
  pinMode(ledf, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledh, OUTPUT);
  pinMode(ledi, OUTPUT);
}

void loop(){
   while(Serial.available() > 0){
    char x = Serial.read();
    Serial.write(x);

    if(x == 'a'){
      //Turn on RightMotor and LeftMotor to forward
      digitalWrite(leda, HIGH);
      digitalWrite(ledb, LOW);
      digitalWrite(ledc, LOW);
      digitalWrite(ledd, LOW);
      digitalWrite(lede, LOW);
      digitalWrite(ledf, LOW);
      digitalWrite(ledg, LOW);
      digitalWrite(ledh, LOW);
      digitalWrite(ledi, LOW);
    }
    else if(x == 'b')
    {
      digitalWrite(leda, LOW);
      digitalWrite(ledb, HIGH);
      digitalWrite(ledc, LOW);
      digitalWrite(ledd, LOW);
      digitalWrite(lede, LOW);
      digitalWrite(ledf, LOW);
      digitalWrite(ledg, LOW);
      digitalWrite(ledh, LOW);
      digitalWrite(ledi, LOW);
    }else if(x == 'c')
    {
      digitalWrite(leda, LOW);
      digitalWrite(ledb, LOW);
      digitalWrite(ledc, HIGH);
      digitalWrite(ledd, LOW);
      digitalWrite(lede, LOW);
      digitalWrite(ledf, LOW);
      digitalWrite(ledg, LOW);
      digitalWrite(ledh, LOW);
      digitalWrite(ledi, LOW);
    }else if(x == 'd')
    {
      digitalWrite(leda, LOW);
      digitalWrite(ledb, LOW);
      digitalWrite(ledc, LOW);
      digitalWrite(ledd, HIGH);
      digitalWrite(lede, LOW);
      digitalWrite(ledf, LOW);
      digitalWrite(ledg, LOW);
      digitalWrite(ledh, LOW);
      digitalWrite(ledi, LOW);
    }else if(x == 'e')
    {
      digitalWrite(leda, LOW);
      digitalWrite(ledb, LOW);
      digitalWrite(ledc, LOW);
      digitalWrite(ledd, LOW);
      digitalWrite(lede, HIGH);
      digitalWrite(ledf, LOW);
      digitalWrite(ledg, LOW);
      digitalWrite(ledh, LOW);
      digitalWrite(ledi, LOW);
    }else if(x == 'f')
    {
      digitalWrite(leda, LOW);
      digitalWrite(ledb, LOW);
      digitalWrite(ledc, LOW);
      digitalWrite(ledd, LOW);
      digitalWrite(lede, LOW);
      digitalWrite(ledf, HIGH);
      digitalWrite(ledg, LOW);
      digitalWrite(ledh, LOW);
      digitalWrite(ledi, LOW);
    }else if(x == 'g')
    {
      digitalWrite(leda, LOW);
      digitalWrite(ledb, LOW);
      digitalWrite(ledc, LOW);
      digitalWrite(ledd, LOW);
      digitalWrite(lede, LOW);
      digitalWrite(ledf, LOW);
      digitalWrite(ledg, HIGH);
      digitalWrite(ledh, LOW);
      digitalWrite(ledi, LOW);
    }else if(x == 'h')
    {
      digitalWrite(leda, LOW);
      digitalWrite(ledb, LOW);
      digitalWrite(ledc, LOW);
      digitalWrite(ledd, LOW);
      digitalWrite(lede, LOW);
      digitalWrite(ledf, LOW);
      digitalWrite(ledg, LOW);
      digitalWrite(ledh, HIGH);
      digitalWrite(ledi, LOW);
    }else if(x == 'i')
    {
      digitalWrite(leda, LOW);
      digitalWrite(ledb, LOW);
      digitalWrite(ledc, LOW);
      digitalWrite(ledd, LOW);
      digitalWrite(lede, LOW);
      digitalWrite(ledf, LOW);
      digitalWrite(ledg, LOW);
      digitalWrite(ledh, LOW);
      digitalWrite(ledi, HIGH);
    }
    else{
      digitalWrite(leda, LOW);
      digitalWrite(ledb, LOW);
      digitalWrite(ledc, LOW);
      digitalWrite(ledd, LOW);
      digitalWrite(lede, LOW);
      digitalWrite(ledf, LOW);
      digitalWrite(ledg, LOW);
      digitalWrite(ledh, LOW);
      digitalWrite(ledi, LOW);
    }
  
  
}
}
