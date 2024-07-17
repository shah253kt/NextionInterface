#include "NextionComponent.h"

NextionComponent::NextionComponent(const NexComponentType type, const uint8_t id, const char *name)
    : m_type{type},
      m_id{id}
{
    strcpy(m_name, name);
}

NextionComponent::~NextionComponent()
{
    delete m_name;
}

NexComponentType NextionComponent::type()
{
    return m_type;
}

uint8_t NextionComponent::id()
{
    return m_id;
}

char *NextionComponent::name()
{
    return m_name;
}

NexRect NextionComponent::rect()
{
    return m_rect;
}
