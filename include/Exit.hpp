#pragma once
#include <stdlib.h>
#include "ExitStata.hpp"

/**
 *
 */
class Exit
{
    void GetCmd(const ExitStata::ExitStata &e)
    {
        if (e == ExitStata::ExitStata::SYSTEM_CODE_EXIT)
        {
            exit(0);
        }
    }
};