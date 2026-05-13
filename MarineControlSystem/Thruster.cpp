
#include "Inputs.h"
#include "Outputs.h"
#include "Thruster.h"

void stopThruster() {

    setThrusterPort(false);
    setThrusterStar(false);
}

void processThruster() {

    bool port = false;
    bool star = false;

    if (bridgeEnabled()) {
        port = bridgeThrusterPort();
        star = bridgeThrusterStar();
    }

    if (cockpitEnabled()) {
        port = cockpitThrusterPort();
        star = cockpitThrusterStar();
    }

    if (port && star) {
        stopThruster();
        return;
    }

    setThrusterPort(port);
    setThrusterStar(star);
}
