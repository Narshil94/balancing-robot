/// @file telemetry.h
/// @brief This class will recieve a data structure and send it over UDP.

#ifndef TELEMETRY_H
#define TELEMETRY_H

#include <M5Stack.h>
#include <string>
#include "WiFi.h"
#include "WiFiUdp.h"

class Telemetry
{
    Telemetry(std::string ssid, std::string pass);
};

#endif // TELEMETRY_H