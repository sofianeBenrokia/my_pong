/*
*   program written by sofiane benrokia
*   email: benrokia.sofiane.adel@gmail.com
*   github: https://github.com/sofianeBenrokia/my_pong
*/
#include <windows.h>
#include <SDL.h>

#include "declaration/define.hpp"

#include "declaration/global.hpp"

#include "declaration/event.hpp"

#include "object/texture/texture.hpp"

#include "declaration/texture.hpp"

#include "function/function.hpp"

int main(int argc , char **argv)
    {
        
        #include "init_destroy/init.hpp"

        long long start_time ;

        int end_time ;

        while(!e_escape_press)
            {
                start_time = SDL_GetTicks() ;

                #include "update/update.hpp"

                end_time = SDL_GetTicks() - start_time ;

                if(end_time < 16)
                    SDL_Delay(16 - end_time);
        
            }
    
        #include "init_destroy/destroy.hpp"

        return 0 ;
    }