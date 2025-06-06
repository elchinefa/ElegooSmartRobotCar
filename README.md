# ELEGOO Smart Robot Car Kit V4.0 – Modified Main Code
This is the main code for the ELEGOO Smart Robot Car Kit V4.0, modified to connect directly to your home Wi-Fi network instead of creating its own Wi-Fi access point.

What's Changed
By default, the robot car creates a Wi-Fi AP for mobile control. To avoid switching Wi-Fi networks, this version connects to your home network.

Configuration
To set it up:

Edit the file:
ESP32_CameraServer_AP_20210107/ESP32_CameraServer_AP_20210107.ino

Update the following lines with your network details:

```
const char* ssid = "ChangeMe";
const char* password = "changeme";
IPAddress local_IP(192, 168, 0, 42); // Set to your preferred static IP
IPAddress gateway(192, 168, 0, 1);   // Set to your Gateaway
IPAddress subnet(255, 255, 255, 0);  // Set to your Subnetmask
You can also set the new IP in the mobile app settings to match the static IP above.
```
