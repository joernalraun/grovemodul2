#include "pxt.h"

namespace grove {
    /**
     * Check if the runtime is Codal
     */
    //% block="Is Codal?"
    //% group="Ultrasonic"
    bool isCodal() {
#if MICROBIT_CODAL
       return true;
#else
       return false;
#endif
    }

}