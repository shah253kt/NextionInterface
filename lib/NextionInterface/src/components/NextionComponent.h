#pragma once

#include "NexRect.h"

#include <Arduino.h>

#define HasVisibilityProperty \
public:                       \
    void hide()               \
    {                         \
    }                         \
                              \
    void show()               \
    {                         \
    }

enum class NexComponentType : uint16_t;

class NextionComponent
{
public:
    NextionComponent(NexComponentType type, uint8_t id, const char *name);
    ~NextionComponent();

    NexComponentType type();
    uint8_t id();
    char *name();
    NexRect rect();

private:
    NexComponentType m_type;
    uint8_t m_id;
    char *m_name;
    NexRect m_rect;
};
