#pragma once

#include "NexPoint.h"

struct NexRect
{
    NexPoint origin;
    int width{0};
    int height{0};

    NexPoint topLeft()
    {
        return origin;
    }

    NexPoint topRight()
    {
        return NexPoint{.x = origin.x + width, .y = origin.y};
    }

    NexPoint bottomRight()
    {
        return NexPoint{.x = origin.x + width, .y = origin.y + height};
    }

    NexPoint bottomLeft()
    {
        return NexPoint{.x = origin.x, .y = origin.y + height};
    }
};
