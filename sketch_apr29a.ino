#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(4, OUTPUT);
  // put your setup code here, to run once:

  //display
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Display OLED não encontrado"));
    for(;;);
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE); 
  display.setCursor(0, 0);
  display.println("Ola, Saulo Catunda!");
  display.display(); 
}

void loop() {
  //led 13 pisca
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13,LOW);
  delay(2000);
  //led 12 fica aceso
  digitalWrite(12, HIGH);
  //led vermelho piscando rapido
  for (int i = 0; i < 10; i++) {
      digitalWrite(4, HIGH);
      delay(100);
      digitalWrite(4, LOW);
      delay(100);
    }
  //display
  
  // put your main code here, to run repeatedly:
}
void loop2() {
  
}
