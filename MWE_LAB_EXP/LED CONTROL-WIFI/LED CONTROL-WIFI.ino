#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT

#include <RemoteXY.h>

#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600
#define REMOTEXY_WIFI_SSID "SATYAM"
#define REMOTEXY_WIFI_PASSWORD "123456789"
#define REMOTEXY_SERVER_PORT 6377
 
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,2,0,0,0,37,0,16,39,1,2,1,10,24,44,23,136,26,31,31,
  79,78,0,79,70,70,0,2,1,10,54,44,22,1,26,31,31,79,78,0,
  79,70,70,0 };

struct {

  uint8_t GREEN;
  uint8_t RED;
  uint8_t connect_flag;

} RemoteXY;
#pragma pack(pop)

#define PIN_GREEN 13
#define PIN_RED 12

void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_GREEN, OUTPUT);
  pinMode (PIN_RED, OUTPUT);
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_GREEN, (RemoteXY.GREEN==0)?LOW:HIGH);
  digitalWrite(PIN_RED, (RemoteXY.RED==0)?LOW:HIGH);
  
}