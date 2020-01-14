#include "../../TeensyTimerTool.h"

#if defined(HAS_TCK)

namespace TeensyTimerTool
{
    bool TCK_t::isInitialized = false;
    TckChannel* TCK_t::channels[maxTckChannels];
}

void yield() { TeensyTimerTool::TCK_t::tick(); }

#endif