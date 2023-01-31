#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT

#include <RemoteXY.h>
 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600
#define REMOTEXY_WIFI_SSID "PARKING SLOT INDICATOR"
#define REMOTEXY_WIFI_PASSWORD "happyhappy"
#define REMOTEXY_SERVER_PORT 6377

#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,12,0,0,0,207,0,16,165,1,2,1,6,10,22,11,1,26,31,31,
  79,78,0,79,70,70,0,2,1,6,24,22,11,1,26,31,31,79,78,0,
  79,70,70,0,2,1,6,38,22,11,1,26,31,31,79,78,0,79,70,70,
  0,2,1,6,52,22,11,1,26,31,31,79,78,0,79,70,70,0,2,1,
  6,66,22,11,1,26,31,31,79,78,0,79,70,70,0,2,1,6,80,22,
  11,1,26,31,31,79,78,0,79,70,70,0,2,1,32,10,22,11,12,26,
  31,31,79,78,0,79,70,70,0,2,1,32,24,22,11,12,26,31,31,79,
  78,0,79,70,70,0,2,1,32,38,22,11,12,26,31,31,79,78,0,79,
  70,70,0,2,1,32,52,22,11,12,26,31,31,79,78,0,79,70,70,0,
  2,1,32,66,22,11,12,26,31,31,79,78,0,79,70,70,0,2,1,32,
  80,22,11,12,26,31,31,79,78,0,79,70,70,0 };
  
struct {
  uint8_t switch_1;
  uint8_t switch_2;
  uint8_t switch_3;
  uint8_t switch_4;
  uint8_t switch_5; 
  uint8_t switch_6;
  uint8_t switch_7;
  uint8_t switch_8; 
  uint8_t switch_9;
  uint8_t switch_10; 
  uint8_t switch_11; 
  uint8_t switch_12;

  uint8_t connect_flag;
} RemoteXY;
#pragma pack(pop)

#define PIN_SWITCH_1 2
#define PIN_SWITCH_2 4
#define PIN_SWITCH_3 6
#define PIN_SWITCH_4 8
#define PIN_SWITCH_5 10
#define PIN_SWITCH_6 12
#define PIN_SWITCH_7 3
#define PIN_SWITCH_8 5
#define PIN_SWITCH_9 7
#define PIN_SWITCH_10 9
#define PIN_SWITCH_11 11
#define PIN_SWITCH_12 13

void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_SWITCH_1, OUTPUT);
  pinMode (PIN_SWITCH_2, OUTPUT);
  pinMode (PIN_SWITCH_3, OUTPUT);
  pinMode (PIN_SWITCH_4, OUTPUT);
  pinMode (PIN_SWITCH_5, OUTPUT);
  pinMode (PIN_SWITCH_6, OUTPUT);
  pinMode (PIN_SWITCH_7, OUTPUT);
  pinMode (PIN_SWITCH_8, OUTPUT);
  pinMode (PIN_SWITCH_9, OUTPUT);
  pinMode (PIN_SWITCH_10, OUTPUT);
  pinMode (PIN_SWITCH_11, OUTPUT);
  pinMode (PIN_SWITCH_12, OUTPUT);
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_SWITCH_1, (RemoteXY.switch_1==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_2, (RemoteXY.switch_2==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_3, (RemoteXY.switch_3==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_4, (RemoteXY.switch_4==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_5, (RemoteXY.switch_5==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_6, (RemoteXY.switch_6==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_7, (RemoteXY.switch_7==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_8, (RemoteXY.switch_8==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_9, (RemoteXY.switch_9==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_10, (RemoteXY.switch_10==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_11, (RemoteXY.switch_11==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_12, (RemoteXY.switch_12==0)?LOW:HIGH);
}