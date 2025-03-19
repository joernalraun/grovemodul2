#include "pxt.h"

namespace grove {

#if MICROBIT_CODAL
    #define isCodal true
#else
    #define isCodal false
#endif

    /**
     * Returns if it is Codal
     * 
     */
    //% help=basic/pause weight=50
    //% async block="isCodal" blockGap=16
    //% blockId=grove_is_codal
    //% group="grove"
    //% hidden=1 deprecated=1
    bool isCodal() {
        return isCodal;
    }

}