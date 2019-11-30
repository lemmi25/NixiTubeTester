#include <Arduino.h>
#include <Shifty.h>

Shifty myreg;

void setup()
{
  myreg.setBitCount(8);
  myreg.setPins(11, 12, 8);
}

void NixiNumber(bool D, bool C, bool B, bool A)
{
  myreg.writeBit(0, A);
  myreg.writeBit(1, B);
  myreg.writeBit(2, D);
  myreg.writeBit(3, C);
}

void loop()
{
  // 0
  NixiNumber(LOW, LOW, HIGH, HIGH);
  delay(1000);
  // 1
  NixiNumber(HIGH, LOW, LOW, LOW);
  delay(1000);
  // 2
  NixiNumber(HIGH, LOW, LOW, HIGH);
  delay(1000);
  // 3
  NixiNumber(LOW, LOW, LOW, LOW);
  delay(1000);
  // 4
  NixiNumber(LOW, HIGH, HIGH, HIGH);
  delay(1000);
  // 5
  NixiNumber(LOW, HIGH, HIGH, LOW);
  delay(1000);
  // 6
  NixiNumber(LOW, HIGH, LOW, HIGH);
  delay(1000);
  // 7
  NixiNumber(LOW, HIGH, LOW, LOW);
  delay(1000);
  // 8
  NixiNumber(LOW, LOW, LOW, HIGH);
  delay(1000);
  // 9
  NixiNumber(LOW, LOW, HIGH, LOW);
  delay(1000);
}