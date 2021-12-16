/*
*   program written by sofiane benrokia
*   email: benrokia.sofiane.adel@gmail.com
*   github: https://github.com/sofianeBenrokia/my_pong
*   
*   the version of SDL2 used is the 2.0.16
*   don't forget to add the SDL2 library in main\dependence\SDL2-2.0.16 (visual studio) 
*   and move the dll file in Win32\Debug or x64\Debug depending on the version you are using or
*   Win32\release or x64\release if you are in the release mode.
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