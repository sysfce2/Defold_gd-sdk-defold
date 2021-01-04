#pragma once

#include <dmsdk/sdk.h>

#if defined(DM_PLATFORM_HTML5)

typedef void (*OnEventCallback)(const char* event, const char* message);

extern "C" {
    void GameDistribution_PlatformInit(const char* gameId, int debug);
    void GameDistribution_PlatformSetEventListener(OnEventCallback callback);
    void GameDistribution_PlatformShowDisplayAd(const char* containerId);
    void GameDistribution_PlatformShowRewardedAd();
    void GameDistribution_PlatformShowInterstitialAd();
    void GameDistribution_PlatformOpenConsole();
}

#endif
