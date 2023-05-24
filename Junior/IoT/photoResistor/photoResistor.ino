#include <IRremote.h>

// 리모콘 버튼과 아두이노 핀을 연결합니다.
const int RECV_PIN = A0;
const int LED_PIN = 13;

// IR 리모콘 객체를 생성합니다.
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  // 시리얼 통신을 시작합니다.
  Serial.begin(9600);

  // 리모콘 수신을 초기화합니다.
  irrecv.enableIRIn();
  irrecv.blink13(true);

  // LED 핀을 출력으로 설정합니다.
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  if (irrecv.decode(&results))
  {
    // 수신한 신호가 있을 경우 처리합니다.
    switch (results.value)
    {
      case 0xFF6897:  // 1번 버튼의 신호 값
        digitalWrite(LED_PIN, HIGH); // LED를 켭니다.
        break;
      case 0xFF30CF:  // 2번 버튼의 신호 값
        digitalWrite(LED_PIN, LOW);  // LED를 끕니다.
        break;
      default:
        // 다른 버튼이 눌렸을 경우 아무 동작도 하지 않습니다.
        break;
    }

    // 다음 신호를 기다립니다.
    irrecv.resume();
  }
}