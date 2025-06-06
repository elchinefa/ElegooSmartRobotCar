/*
 * @Descripttion: 
 * @version: 
 * @Author: Elegoo
 * @Date: 2020-06-04 11:42:27
 * @LastEditors: Changhua
 * @LastEditTime: 2020-07-23 14:21:48
 */
/*
#ifndef _CameraWebServer_AP_H
#define _CameraWebServer_AP_H
#include "esp_camera.h"
#include <WiFi.h>

class CameraWebServer_AP
{

public:
  void CameraWebServer_AP_Init(void);
  String wifi_name;

private:
  // const char *ssid = "ESP32_CAM";
  // const char *password = "elegoo2020";
  char *ssid = "ELEGOO-Elchin";
  char *password = "elegoo2025";
  //char *password = "";
};

#endif*/


#ifndef _CameraWebServer_AP_H
#define _CameraWebServer_AP_H
#include "esp_camera.h"
#include <WiFi.h>

class CameraWebServer_AP

{
public:
  void CameraWebServer_AP_Init(void);
  String wifi_name;

private:
  const char *ssid = "ChangeMe";       // Replace with your home Wi-Fi SSID
  const char *password = "ChangeMe";   // Replace with your home Wi-Fi password
};

#endif
