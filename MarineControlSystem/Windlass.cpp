
#include "Inputs.h"
#include "Outputs.h"
#include "Windlass.h"

void stopWindlass() {

    setWindlassUp(false);
    setWindlassDown(false);
}

void processWindlass() {

    bool up = false;
    bool down = false;

    if (bridgeEnabled()) {
        up = bridgeWindlassUp();
        down = bridgeWindlassDown();
    }

    if (cockpitEnabled()) {
        up = cockpitWindlassUp();
        down = cockpitWindlassDown();
    }

    if (up && down) {
        stopWindlass();
        return;
    }

    setWindlassUp(up);
    setWindlassDown(down);
}
