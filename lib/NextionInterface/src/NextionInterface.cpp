#include "NextionInterface.h"

namespace
{
    constexpr auto BUFFER_SIZE = 50;
}

NextionInterface::NextionInterface(Stream &stream)
    : m_stream{&stream},
      m_buffer{new uint8_t[BUFFER_SIZE]}
{
}

NextionInterface::~NextionInterface()
{
    delete[] m_buffer;
}

void NextionInterface::update()
{
    if (!m_stream->available())
    {
        return;
    }
}
