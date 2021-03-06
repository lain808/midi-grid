#pragma once

#include <cstdint>

struct Coordinates
{
    uint8_t x;
    uint8_t y;

    bool operator==(const Coordinates& coordinates) const
    {
        bool equal = true;
        equal &= (this->x == coordinates.x);
        equal &= (this->y == coordinates.y);
        return equal;
    };

    bool operator<(const Coordinates& coordinates) const
    {
        bool lessThan = true;
        lessThan &= (this->x < coordinates.x);
        lessThan &= (this->y < coordinates.y);
        return lessThan;
    };
};
