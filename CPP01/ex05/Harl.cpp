# include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "DEBUG" << std::endl;
}

void Harl::info( void )
{
    std::cout << "INFO" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "WARNING" << std::endl;
}

void Harl::error( void )
{
    std::cout << "ERROR" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string array[4] = {"debug", "info", "warning", "error"};

    void (Harl::*ptrToMemeberFct[])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for(int i = 0; i < 4; i++)
    {
        if(level == array[i])
        {
            (this->*ptrToMemeberFct[i])();
            return ;
        }
    }
}