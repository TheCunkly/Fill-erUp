int fade1 = 0;
int fade2 = 0;
int fade3 = 0;
int fade4 = 0;

long lastTime = 0;

int fiver = 5000;

long currentTime = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);

  }

void loop() {
  currentTime = millis();
  if (currentTime - lastTime >= fiver) {
for (int i = 0; i < 255; i ++){
  analogWrite(11, i);
}
  }
  
  lastTime = currentTime; 

    if (currentTime - lastTime >= fiver) {
for (int i = 0; i < 255; i ++){
  analogWrite(10, i);
}
  }
  
  lastTime = currentTime; 

    if (currentTime - lastTime >= fiver) {
for (int i = 0; i < 255; i ++){
  analogWrite(9, i);
}
  }
  
  lastTime = currentTime; 

    if (currentTime - lastTime >= fiver) {
for (int i = 0; i < 255; i ++){
  analogWrite(6, i);
}
  }
  
  lastTime = currentTime; 

    if (currentTime - lastTime >= fiver) {
for (int i = 255; i > 0; i --){
  analogWrite(11, i);
  analogWrite(10, i);
  analogWrite(9, i);
  analogWrite(6, i);
}
  }
  
  lastTime = currentTime; 

}
