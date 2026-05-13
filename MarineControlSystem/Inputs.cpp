
#include <Arduino.h>
#include "Config.h"
#include "Inputs.h"

void initInputs() {

    pinMode(BRIDGE_ENABLE_PIN, INPUT_PULLUP);
    pinMode(BRIDGE_THRUST_PORT, INPUT_PULLUP);
    pinMode(BRIDGE_THRUST_STAR, INPUT_PULLUP);
    pinMode(BRIDGE_WINDLASS_UP, INPUT_PULLUP);
    pinMode(BRIDGE_WINDLASS_DOWN, INPUT_PULLUP);

    pinMode(COCKPIT_ENABLE_PIN, INPUT_PULLUP);
    pinMode(COCKPIT_THRUST_PORT, INPUT_PULLUP);
    pinMode(COCKPIT_THRUST_STAR, INPUT_PULLUP);
    pinMode(COCKPIT_WINDLASS_UP, INPUT_PULLUP);
    pinMode(COCKPIT_WINDLASS_DOWN, INPUT_PULLUP);

    pinMode(EMERGENCY_STOP_PIN, INPUT_PULLUP);
}

void updateInputs() {
}

bool bridgeEnabled() { return !digitalRead(BRIDGE_ENABLE_PIN); }
bool cockpitEnabled() { return !digitalRead(COCKPIT_ENABLE_PIN); }

bool bridgeThrusterPort() { return !digitalRead(BRIDGE_THRUST_PORT); }
bool bridgeThrusterStar() { return !digitalRead(BRIDGE_THRUST_STAR); }

bool cockpitThrusterPort() { return !digitalRead(COCKPIT_THRUST_PORT); }
bool cockpitThrusterStar() { return !digitalRead(COCKPIT_THRUST_STAR); }

bool bridgeWindlassUp() { return !digitalRead(BRIDGE_WINDLASS_UP); }
bool bridgeWindlassDown() { return !digitalRead(BRIDGE_WINDLASS_DOWN); }

bool cockpitWindlassUp() { return !digitalRead(COCKPIT_WINDLASS_UP); }
bool cockpitWindlassDown() { return !digitalRead(COCKPIT_WINDLASS_DOWN); }

bool emergencyStopPressed() { return !digitalRead(EMERGENCY_STOP_PIN); }
