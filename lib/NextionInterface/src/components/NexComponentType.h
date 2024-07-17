#pragma once

#include <Arduino.h>

enum class NexComponentType : uint16_t
{
    Page = 121,
    Text = 116,
    ScrollingText = 55,
    Number = 54,
    XFloat = 59,
    Button = 98,
    ProgressBar = 106,
    Picture = 112,
    Crop = 113,
    Hotspot = 109,
    TouchCap = 5,
    Gauge = 122,
    Waveform = 0,
    Slider = 1,
    Timer = 51,
    Variable = 52,
    DualStateButton = 53,
    Checkbox = 56,
    Radio = 57,
    QRCode = 58,
    Switch = 67,
    ComboBox = 61,
    TextSelect = 68,
    SLText = 62,
    DataRecord = 66,
    FileBrowser = 65,
    FileStream = 63,
    Gmov = 2,
    Video = 3,
    Audio = 4,
    ExPicture = 60
};
