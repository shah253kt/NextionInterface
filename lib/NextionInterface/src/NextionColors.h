#pragma once

#include <Arduino.h>

#define NEX_BLACK 0
#define NEX_BLUE 31
#define NEX_BROWN 48192
#define NEX_GREEN 2016
#define NEX_YELLOW 65504
#define NEX_RED 63488
#define NEX_GRAY 33840
#define NEX_WHITE 65535

namespace NextionColor
{
    uint16_t toRgb565(uint8_t r, uint8_t g, uint8_t b)
    {
        r = (r & 0b11111000) >> 3;
        g = (g & 0b11111100) >> 2;
        b = (b & 0b11111000) >> 3;
        return (r << 11) | (g << 5) | b;
    }
}
