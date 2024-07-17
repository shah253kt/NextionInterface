#pragma once

#include <Arduino.h>

enum class NextionReturnData : uint16_t
{
    InvalidInstruction = 0x00,
    SuccessfulInstruction = 0x01,
    InvalidComponentId = 0x02,
    InvalidPageId = 0x03,
    InvalidPictureId = 0x04,
    InvalidFontId = 0x05,
    InvalidFileOperation = 0x06,
    InvalidCrc = 0x09,
    InvalidBaudRate = 0x11,
    InvalidWaveformId = 0x12,
    InvalidVariableName = 0x1A,
    InvalidVariableOperation = 0x1B,
    AssignmentFailed = 0x1C,
    EepromOperationFailed = 0x1D,
    InvalidParameters = 0x1E,
    IoOperationFailed = 0x1F,
    InvalidEscapeCharacter = 0x20,
    VariableNameTooLong = 0x23,

    // Always available
    SerialBufferOverflow = 0x24,
    TouchEvent = 0x65,
    CurrentPageNumber = 0x66,
    TouchCoordinateAwake = 0x67,
    TouchCoordinateSleep = 0x68,
    StringDataEnclosed = 0x70,
    NumericDataEnclosed = 0x71,
    AutoEnteredSleepMode = 0x86,
    AutoWakeFromSleep = 0x87,
    NextionReady = 0x88,
    StartMicroSdUpgrade = 0x89,
    TransparentDataFinished = 0xFD,
    TransparentDataReady = 0xFE
};
