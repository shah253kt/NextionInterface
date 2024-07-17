#pragma once

#include <Arduino.h>

class NextionInterface
{
public:
    NextionInterface(Stream &stream);
    ~NextionInterface();

    void update();

private:
    Stream *m_stream;
    uint8_t *m_buffer;
};
