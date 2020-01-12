#define LED_USB 14
#define LED_UART 16
#define PIN_LED LED_UART

void setup()
{
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_LED, HIGH);
  delay(2000);
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}