#define BLYNK_PRINT Serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"


#include <SPI.h>
#include <Ethernet.h>
#include <BlynkSimpleEthernet.h>
#include <Servo.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "YourAuthToken";

Servo servo;

BLYNK_WRITE(V3)
{
  servo.write(param.asInt());
}

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth);

  servo.attach(9);
}

void loop()
{
  Blynk.run();
}
