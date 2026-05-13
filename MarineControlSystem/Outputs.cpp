
#include <Arduino.h>
#include "Config.h"
#include "Outputs.h"

void initOutputs() {

    pinMode(THRUSTER_PORT_RELAY, OUTPUT);
    pinMode(THRUSTER_STAR_RELAY, OUTPUT);

    pinMode(WINDLASS_UP_RELAY, OUTPUT);
    pinMode(WINDLASS_DOWN_RELAY, OUTPUT);

    pinMode(LED_READY, OUTPUT);
    pinMode(LED_ACTIVE, OUTPUT);

    stopAllOutputs();

    digitalWrite(LED_READY, HIGH);
}

void setThrusterPort(bool state) {
    digitalWrite(THRUSTER_PORT_RELAY, state);
}

void setThrusterStar(bool state) {
    digitalWrite(THRUSTER_STAR_RELAY, state);
}

void setWindlassUp(bool state) {
    digitalWrite(WINDLASS_UP_RELAY, state);
}

void setWindlassDown(bool state) {
    digitalWrite(WINDLASS_DOWN_RELAY, state);
}

void stopAllOutputs() {

    setThrusterPort(false);
    setThrusterStar(false);

    setWindlassUp(false);
    setWindlassDown(false);
}

void updateStatusLEDs() {

    bool active =
        digitalRead(THRUSTER_PORT_RELAY) ||
        digitalRead(THRUSTER_STAR_RELAY) ||
        digitalRead(WINDLASS_UP_RELAY) ||
        digitalRead(WINDLASS_DOWN_RELAY);

    digitalWrite(LED_ACTIVE, active);
}
