const char* private_key = "THIS IS A PRIVATE KEY";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.printf("Hello there:)\n");
  printf("Your private key: %s\n", private_key);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  printf("Hello world\n");
}
