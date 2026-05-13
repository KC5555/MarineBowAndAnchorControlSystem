
#include "Inputs.h"
#include "Outputs.h"

void systemSafeState() {
    stopAllOutputs();
}

void processSafety() {

    if (emergencyStopPressed()) {
        stopAllOutputs();
        return;
    }

    if (bridgeEnabled() && cockpitEnabled()) {
        stopAllOutputs();
        return;
    }
}
