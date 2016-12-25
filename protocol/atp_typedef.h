#pragma once
#include "webrtc\common_types.h"
const webrtc::CodecInst database[] = {
    { 103, "ISAC", 16000, 480, 1, 32000 },
    { 104, "ISAC", 32000, 960, 1, 56000 },
    { 105, "ISAC", 48000, 1440, 1, 56000 },
    { 107, "L16", 8000, 80, 1, 128000 },
    { 108, "L16", 16000, 160, 1, 256000 },
    { 109, "L16", 32000, 320, 1, 512000 },
    { 111, "L16", 8000, 80, 2, 128000 },
    { 112, "L16", 16000, 160, 2, 256000 },
    { 113, "L16", 32000, 320, 2, 512000 },
    { 0, "PCMU", 8000, 160, 1, 64000 },
    { 8, "PCMA", 8000, 160, 1, 64000 },
    { 110, "PCMU", 8000, 160, 2, 64000 },
    { 118, "PCMA", 8000, 160, 2, 64000 },
    { 102, "ILBC", 8000, 240, 1, 13300 },
    { 114, "AMR", 8000, 160, 1, 12200 },
    { 115, "AMR-WB", 16000, 320, 1, 20000 },
    { 116, "CELT", 32000, 640, 1, 64000 },
    { 117, "CELT", 32000, 640, 2, 64000 },
    { 9, "G722", 16000, 320, 1, 64000 },
    { 119, "G722", 16000, 320, 2, 64000 },
    { 92, "G7221", 16000, 320, 1, 32000 },
    { 91, "G7221", 16000, 320, 1, 24000 },
    { 90, "G7221", 16000, 320, 1, 16000 },
    { 89, "G7221", 32000, 640, 1, 48000 },
    { 88, "G7221", 32000, 640, 1, 32000 },
    { 87, "G7221", 32000, 640, 1, 24000 },
    { 18, "G729", 8000, 240, 1, 8000 },
    { 86, "G7291", 16000, 320, 1, 32000 },
    { 3, "GSM", 8000, 160, 1, 13200 },
    { 120, "opus", 48000, 960, 2, 64000 },
    { 85, "speex", 8000, 160, 1, 11000 },
    { 84, "speex", 16000, 320, 1, 22000 },
    { 13, "CN", 8000, 240, 1, 0 },
    { 98, "CN", 16000, 480, 1, 0 },
    { 99, "CN", 32000, 960, 1, 0 },
    { 100, "CN", 48000, 1440, 1, 0 },
    { 106, "telephone-event", 8000, 240, 1, 0 },
    { 127, "red", 8000, 0, 1, 0 },
    { -1, "Null", -1, -1, -1, -1 }
};