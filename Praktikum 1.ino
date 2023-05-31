// Pin yang digunakan untuk mengontrol LED
const int ledPin = 9;

void setup() {
  // Mengatur pin LED sebagai OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Mengatur tingkat kecerahan LED dengan modulasi lebar pulsa (PWM)
  analogWrite(ledPin, 128); // Nilai 128 menghasilkan kecerahan setengah
  delay(1000); // Menunggu selama 1 detik
  
  analogWrite(ledPin, 0); // Mematikan LED
  delay(1000); // Menunggu selama 1 detik
}
