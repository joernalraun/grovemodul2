#include "pxt.h"

namespace grove {
    /**
     * Return true if current environment is Codal
     */
    //% async block="isCodal" blockGap=16
    //% blockId=grove_is_codal
    //% group="grove"

    bool isCodal() {
#if MICROBIT_CODAL
       return true;
#else
       return false;
#endif
    }

}