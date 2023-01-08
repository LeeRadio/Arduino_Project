#include "DHT.h" //DHT 라이브러리

#define DHTPIN D1 //DHT D1 PIN 설정
#define DHTTYPE DHT11   // DHT 22  (AM2302), AM2321 
//센서는 DHT11 사용했기때문에 DHT11 로 설정한다.
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

int redPin = D5; //RGB RED -> D5 PIN
int greenPin = D6; //RGB GREEN -> D6 PIN
int bluePin = D7; //RGB BLUE -> D7 PIN

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin(); //DHT 통신 시작
  pinMode(redPin, OUTPUT); //Red PIN OUTPUT Seting
  pinMode(greenPin, OUTPUT); //Green PIN OUTPUT Seting
  pinMode(bluePin, OUTPUT);  //Blue PIN OUTPUT Seting

}


void setColor(int red, int green, int blue) //RGB Color Seting
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue); 
}

void loop() {
  
   setColor(255, 0, 0); // red
  delay(1000);
  setColor(0, 255, 0); // green
  delay(1000);
  setColor(0, 0, 255); // blue
  delay(1000);

}
