// **********************************
// * Settings                       *
// **********************************

// Update treshold in milliseconds, messages will only be sent on this interval
#define UPDATE_INTERVAL 500  // .5 seconds
//#define UPDATE_INTERVAL 60000  // 1 minute
//#define UPDATE_INTERVAL 300000 // 5 minutes

// * Baud rate for both hardware and software 
#define BAUD_RATE 115200

// The used serial pins, note that this can only be UART0, as other serial port doesn't support inversion
// By default the UART0 serial will be used. These settings displayed here just as a reference. 
// #define SERIAL_RX RX
// #define SERIAL_TX TX

// * Max telegram length
#define P1_MAXLINELENGTH 1050

// * The hostname of our little creature
#define HOSTNAME "p1meter"

// * The password used for OTA
#define OTA_PASSWORD "admin"

// * Wifi timeout in milliseconds
#define WIFI_TIMEOUT 30000

// * MQTT network settings
#define MQTT_MAX_RECONNECT_TRIES 10

// * MQTT root topic
#define MQTT_ROOT_TOPIC "sensors/power/p1meter"

// * Water meter configuration
#define WATER_PIN 5
#define WATER_PULSE_SCALE 500
#define WATER_PULSE_DEBOUNCE 200

// * MQTT Last reconnection counter
long LAST_RECONNECT_ATTEMPT = 0;

long LAST_UPDATE_SENT = 0;

// * To be filled with EEPROM data
char MQTT_HOST[64] = "";
char MQTT_PORT[6]  = "";
char MQTT_USER[32] = "";
char MQTT_PASS[32] = "";

struct METERVALUE { long currentValue; long previousValue; };

// * Set to store received telegram
char telegram[P1_MAXLINELENGTH];

// * Set to store the data values read
METERVALUE CONSUMPTION_LOW_TARIF;
METERVALUE CONSUMPTION_HIGH_TARIF;

METERVALUE RETURNDELIVERY_LOW_TARIF;
METERVALUE RETURNDELIVERY_HIGH_TARIF;

METERVALUE ACTUAL_CONSUMPTION;
METERVALUE ACTUAL_RETURNDELIVERY;
METERVALUE GAS_METER_M3;

METERVALUE L1_INSTANT_POWER_USAGE;
METERVALUE L2_INSTANT_POWER_USAGE;
METERVALUE L3_INSTANT_POWER_USAGE;
METERVALUE L1_INSTANT_POWER_CURRENT;
METERVALUE L2_INSTANT_POWER_CURRENT;
METERVALUE L3_INSTANT_POWER_CURRENT;
METERVALUE L1_VOLTAGE;
METERVALUE L2_VOLTAGE;
METERVALUE L3_VOLTAGE;

// Set to store data counters read
METERVALUE ACTUAL_TARIF;
METERVALUE SHORT_POWER_OUTAGES;
METERVALUE LONG_POWER_OUTAGES;
METERVALUE SHORT_POWER_DROPS;
METERVALUE SHORT_POWER_PEAKS;

// Water

//METERVALUE WATER_PULSE_COUNTER;
//METERVALUE WATER_PULSE_LAST_MILLIS;
//
//WATER_PULSE_COUNTER.currentValue = 0;

// * Set during CRC checking
unsigned int currentCRC = 0;
