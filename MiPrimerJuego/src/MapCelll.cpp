#include "MapCelll.h"

MapCelll::MapCelll()
{
    //ctor
    id = '0';
}

bool MapCelll::IsBlocked()
{
    if (id == '1')
    {
        return true;
    }
    else
    {
        return false;
    }
}
