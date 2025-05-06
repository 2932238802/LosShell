

#include"Exit.hpp"

void Exit::GetCmd(const ExitStata::ExitStata &e)
{
    if (e == ExitStata::ExitStata::SYSTEM_CODE_EXIT)
    {
        char arr[] = "bye... \n";
        write(STDOUT_FILENO,arr,sizeof(arr));
        exit(0);
    }
}