#pragma once

#ifdef RGBLIGHT_ENABLE
    // Blue Preonic
    #define RESTINGCOLOR HSV_CYAN
    // Sunset Preonic
    // #define RESTINGCOLOR HSV_ORANGE
    // default
    // #undef RESTINGCOLOR
#endif

#ifdef AUDIO_ENABLE
    #undef TEMPO_DEFAULT
    #define TEMPO_DEFAULT 200
    // Blue Preonic
    #define STARTUP_SONG SONG(IM_BLUE)
    // Sunset Preonic
    // #define STARTUP_SONG SONG(PREONIC_SOUND)
    // default
    // #define STARTUP_SONG SONG(NO_SOUND)

#endif
