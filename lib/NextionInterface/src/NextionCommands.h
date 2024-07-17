#pragma once

enum class NextionCommand
{
    // Operational Commands
    ChangePage,                  // page
    RefreshComponent,            // ref
    Click,                       // click
    StopWaveformRefresh,         // ref_stop
    ResumeWaveformRefresh,       // ref_star
    GetAttribute,                // get
    GetCurrentPageId,            // sendme
    CalibrateTouchSensor,        // touch_j
    SetVisibility,               // vis
    SetTouchEvent,               // tsw
    ClearBuffer,                 // code_c
    AddSingleValueToWaveform,    // add
    AddMultipleValuesToWaveform, // addt
    ClearWaveform,               // cle
    Reset,                       // rest
    WriteEepromSingle,           // wepo
    ReadEepromSingle,            // repo
    WriteEepromMulti,            // wept
    ReadEepromMulti,             // rept
    ConfigureGpio,               // cfgpio
    MoveComponent,               // move
    PlayAudio,                   // play
    SetComponentLayer,           // setlayer

    // GUI Design Commands
    ClearScreen,         // cls
    DisplayPicture,      // pic
    CropPictureArea,     // picq
    AdvancedCropPicture, // xpic
    PrintText,           // xstr
    FillArea,            // fill
    DrawLine,            // line
    DrawRectangle,       // draw
    DrawCircle,          // cir
    DrawFilledCircle,    // cirs

    // System Variables
    CurrentPageId,        // dp
    Backlight,            // dim,
    BacklightPersist,     // dims
    FontSpacingX,         // spax
    FontSpacingY,         // spay
    Sleep,                // sleep
    RtcYear,              // rtc0
    RtcMonth,             // rtc1
    RtcDay,               // rtc2
    RtcHour,              // rtc3
    RtcMinute,            // rtc4
    RtcSecond,            // rtc5
    RtcDayOfWeek,         // rtc6
    Gpio0Value,           // pio0
    Gpio1Value,           // pio1
    Gpio2Value,           // pio2
    Gpio3Value,           // pio3
    Gpio4Value,           // pio4
    Gpio5Value,           // pio5
    Gpio6Value,           // pio6
    Gpio7Value,           // pio7
    Pwm4,                 // pwm4
    Pwm5,                 // pwm5
    Pwm6,                 // pwm6
    Pwm7,                 // pwm7
    PwmFrequency,         // pwmf
    Address,              // addr
    AudioVolume,          // volume
    AudioChannel0Control, // audio0
    AudioChannel1Control  // audio1
};

namespace NextionCommands
{
    const char *getCommand(NextionCommand);
}
