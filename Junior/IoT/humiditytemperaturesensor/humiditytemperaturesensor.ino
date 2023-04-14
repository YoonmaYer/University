  #include "DHT.h"

  #define DHTPIN 8     
  #define DHTTYPE DHT11   // DHT 11


  int RedPin = 4;
  int GreenPin = 2;

  DHT dht(DHTPIN, DHTTYPE);

  void setup() {
    pinMode(RedPin,OUTPUT);
    pinMode(GreenPin, OUTPUT);
    Serial.begin(9600);
    dht.begin();
  }

  void loop() {
    // 측정하는 동안 2초 대기
    delay(2000);

    // 온습도 센서 측정은 250 ms 
    // 습도 측정
    float h = dht.readHumidity();
    //온도 측정
    float t = dht.readTemperature();

    // 온도가 높을시 RedPin 점등
    if(t > 26.00)
    {
      digitalWrite(RedPin, HIGH);
    }
    else{
      digitalWrite(RedPin, LOW);

    }

    // 습도가 높을시 GreenPin 점등
    if(h > 65.00)
    {
      digitalWrite(GreenPin, HIGH);
    }
    else{
      digitalWrite(GreenPin, LOW);

    }


    // 측정값이 숫자가 아니면 true
    if (isnan(h) || isnan(t) ) {
        Serial.println("Failed to read from DHT sensor!");
      return;
    }

    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print("%  Temperature: ");
    Serial.print(t);
    Serial.println("°C "); 
  }
