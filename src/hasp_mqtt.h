#ifndef HASP_MQTT_H
#define HASP_MQTT_H

#include "ArduinoJson.h"

void mqttSetup(const JsonObject & settings);
void mqttLoop(bool wifiIsConnected);
void mqttStop();
void mqttReconnect();

void mqttSendNewEvent(uint8_t pageid, uint8_t btnid, int32_t val);
void mqttSendNewValue(uint8_t pageid, uint8_t btnid, int32_t val);
void mqttSendNewValue(uint8_t pageid, uint8_t btnid, String txt);
void mqttHandlePage(String strPageid);

bool mqttIsConnected(void);

bool mqttGetConfig(const JsonObject & settings);
bool mqttSetConfig(const JsonObject & settings);

#endif