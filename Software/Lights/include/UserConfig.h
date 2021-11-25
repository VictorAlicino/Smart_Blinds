//
// Created by victo on 28/10/2021.
//

#ifndef LIGHTS_USERCONFIG_H
#define LIGHTS_USERCONFIG_H

// ------------------ Wi-Fi Configurations  ----------------- //
/**
 * Change the SELF_WIFI Macro to "true" if you want the user to input the Wi-Fi Credentials via Webserver
 * or change to false in order to set the Wi-Fi Credentials in compilation time, be advised that error caused by
 * connection errors will not be treated in the SELF_WIFI false Mode. Be careful.
 */
#define SELF_WIFI           true
#define WIFI_SSID           "LabIoT"
#define WIFI_PASSWORD       "labiot2020."

/**
 * The WIFI_ATTEMPTS Macro will define how many times the device should try to connect to Wi-Fi before communicate
 * a failure.
 * This Macro is an Integer. Example: WIFI_ATTEMPTS 5
 */
#define WIFI_ATTEMPTS       2
// -------------- end of WiFi Configurations  -------------- //


// ------------------ MQTT Configurations  ----------------- //
/**
 * Change the SELF_MQTT Macro to "true" if you want the user to input the MQTT Credentials via Webserver
 * or change to false in order to set the MQTT Credentials in compilation time, be advised that error caused
 * by connection errors will not be treated in the SELF_MQTT false Mode. Be careful.
 */
#define SELF_MQTT               true

//If the MQTT Network requires Log-in via User and Password, set this variable to "true"
#define IS_MQTT_LOGIN_REQUIRED  false;

#define MQTT_USER               ""
#define MQTT_PASSWORD           ""
#define MQTT_SERVER             "192.168.1.103"
#define MQTT_SERVER_PORT        1883

#define MQTT_TOPIC_to_SUB       "0002"
#define MQTT_TOPIC_to_PUB       "qualquercoisa2"

/**
 * The MQTT_ATTEMPTS Macro will define how many times the device should try to connect to the broker before communicate
 * a failure.
 * This Macro is an Integer. Example: MQTT_ATTEMPTS 5
 */
#define MQTT_ATTEMPTS       2
// -------------- end of MQTT Configurations  -------------- //

// -------------- General Purpose Input/Output   ---------- //
#define MAX_GPIO_IN_USE         1   //Max Input/

#define GP_CONTROL_1            13  //Light 1
#define GP_CONTROL_2            12  //Light 2
#define GP_CONTROL_3            14  //Light 3
#define GP_CONTROL_4            27  //light 4
#define GP_CONTROL_5            26  //Light 5
#define GP_CONTROL_6            25  //Light 6
#define GP_CONTROL_7            33  //Light 7
#define GP_CONTROL_8            32  //Light 8

// --------- end General Purpose Input/Output   ---------- //

#endif //LIGHTS_USERCONFIG_H
