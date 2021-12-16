/*
*   it is on this page that everything is updated
*/

SDL_SetRenderDrawColor(g_render , 0 , 0 , 0 , 255);
SDL_RenderClear(g_render);

#include "event/get_event.hpp"

#include "event/set_event.hpp"

#include "ball/update_ball.hpp"

#include "texture/update_texture.hpp"

#include "event/clear_event.hpp" 

SDL_RenderPresent(g_render);