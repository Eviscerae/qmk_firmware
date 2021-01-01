#pragma once

#ifdef AUDIO_ENABLE
    #undef TEMPO_DEFAULT
    #define TEMPO_DEFAULT 200
    #define STARTUP_SONG SONG(IM_BLUE)
    // #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

#endif
