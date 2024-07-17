#include "NextionPage.h"

#include "NexComponentType.h"

NextionPage::NextionPage(const uint8_t id, const char *name)
    : NextionComponent(NexComponentType::Page, id, name)
{
}
