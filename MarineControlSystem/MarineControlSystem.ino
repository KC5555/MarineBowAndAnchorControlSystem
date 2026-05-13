
#include "Config.h"
#include "Inputs.h"
#include "Outputs.h"
#include "Thruster.h"
#include "Windlass.h"
#include "Safety.h"

void setup() {

    Serial.begin(SERIAL_BAUDRATE);

    initInputs();
    initOutputs();

    systemSafeState();

    Serial.println("Marine Control System Initialized");
}

void loop() {

    updateInputs();

    processSafety();

    processThruster();
    processWindlass();

    updateStatusLEDs();

    delay(5);
}
