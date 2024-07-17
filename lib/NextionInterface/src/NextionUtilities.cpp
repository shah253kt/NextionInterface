#include "NextionUtilities.h"

#include "NextionDayOfWeek.h"

const char *NextionUtilities::getDayOfWeek(const DayOfWeek dow)
{
    switch (dow)
    {
    case DayOfWeek::Sunday:
    {
        return "Sunday";
    }
    case DayOfWeek::Monday:
    {
        return "Monday";
    }
    case DayOfWeek::Tuesday:
    {
        return "Tuesday";
    }
    case DayOfWeek::Wednesday:
    {
        return "Wednesday";
    }
    case DayOfWeek::Thursday:
    {
        return "Thursday";
    }
    case DayOfWeek::Friday:
    {
        return "Friday";
    }
    case DayOfWeek::Saturday:
    {
        return "Saturday";
    }
    }
}

const char *NextionUtilities::getShortDayOfWeek(const DayOfWeek dow)
{
    switch (dow)
    {
    case DayOfWeek::Sunday:
    {
        return "Sun";
    }
    case DayOfWeek::Monday:
    {
        return "Mon";
    }
    case DayOfWeek::Tuesday:
    {
        return "Tue";
    }
    case DayOfWeek::Wednesday:
    {
        return "Wed";
    }
    case DayOfWeek::Thursday:
    {
        return "Thu";
    }
    case DayOfWeek::Friday:
    {
        return "Fri";
    }
    case DayOfWeek::Saturday:
    {
        return "Sat";
    }
    }
}
