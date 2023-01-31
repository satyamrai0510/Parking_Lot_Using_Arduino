/*
   -- New project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600
#define REMOTEXY_WIFI_SSID "parking"
#define REMOTEXY_WIFI_PASSWORD "parking12"
#define REMOTEXY_SERVER_PORT 6377


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 214 bytes
  { 255,12,0,0,0,207,0,16,31,1,2,0,5,7,22,11,1,26,31,31,
  79,78,0,79,70,70,0,2,0,33,7,22,11,12,26,31,31,79,78,0,
  79,70,70,0,2,0,33,23,22,11,12,26,31,31,79,78,0,79,70,70,
  0,2,0,8,24,22,11,1,26,31,31,79,78,0,79,70,70,0,2,0,
  34,39,22,11,12,26,31,31,79,78,0,79,70,70,0,2,0,4,39,22,
  11,1,26,31,31,79,78,0,79,70,70,0,2,0,33,56,22,11,12,26,
  31,31,79,78,0,79,70,70,0,2,0,3,56,22,11,1,26,31,31,79,
  78,0,79,70,70,0,2,0,34,71,22,11,12,26,31,31,79,78,0,79,
  70,70,0,2,0,5,71,22,11,1,26,31,31,79,78,0,79,70,70,0,
  2,0,32,85,22,11,12,26,31,31,79,78,0,79,70,70,0,2,0,5,
  85,22,11,1,26,31,31,79,78,0,79,70,70,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t switch_1; // =1 if switch ON and =0 if OFF 
  uint8_t switch_2; // =1 if switch ON and =0 if OFF 
  uint8_t switch_4; // =1 if switch ON and =0 if OFF 
  uint8_t switch_5; // =1 if switch ON and =0 if OFF 
  uint8_t switch_6; // =1 if switch ON and =0 if OFF 
  uint8_t switch_7; // =1 if switch ON and =0 if OFF 
  uint8_t switch_8; // =1 if switch ON and =0 if OFF 
  uint8_t switch_9; // =1 if switch ON and =0 if OFF 
  uint8_t switch_10; // =1 if switch ON and =0 if OFF 
  uint8_t switch_11; // =1 if switch ON and =0 if OFF 
  uint8_t switch_12; // =1 if switch ON and =0 if OFF 
  uint8_t switch_13; // =1 if switch ON and =0 if OFF 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_SWITCH_1 2
#define PIN_SWITCH_2 3
#define PIN_SWITCH_4 5
#define PIN_SWITCH_5 4
#define PIN_SWITCH_6 7
#define PIN_SWITCH_7 6
#define PIN_SWITCH_8 9
#define PIN_SWITCH_9 8
#define PIN_SWITCH_10 11
#define PIN_SWITCH_11 10
#define PIN_SWITCH_12 13
#define PIN_SWITCH_13 12


void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_SWITCH_1, OUTPUT);
  pinMode (PIN_SWITCH_2, OUTPUT);
  pinMode (PIN_SWITCH_4, OUTPUT);
  pinMode (PIN_SWITCH_5, OUTPUT);
  pinMode (PIN_SWITCH_6, OUTPUT);
  pinMode (PIN_SWITCH_7, OUTPUT);
  pinMode (PIN_SWITCH_8, OUTPUT);
  pinMode (PIN_SWITCH_9, OUTPUT);
  pinMode (PIN_SWITCH_10, OUTPUT);
  pinMode (PIN_SWITCH_11, OUTPUT);
  pinMode (PIN_SWITCH_12, OUTPUT);
  pinMode (PIN_SWITCH_13, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_SWITCH_1, (RemoteXY.switch_1==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_2, (RemoteXY.switch_2==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_4, (RemoteXY.switch_4==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_5, (RemoteXY.switch_5==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_6, (RemoteXY.switch_6==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_7, (RemoteXY.switch_7==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_8, (RemoteXY.switch_8==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_9, (RemoteXY.switch_9==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_10, (RemoteXY.switch_10==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_11, (RemoteXY.switch_11==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_12, (RemoteXY.switch_12==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_13, (RemoteXY.switch_13==0)?LOW:HIGH);
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 


}