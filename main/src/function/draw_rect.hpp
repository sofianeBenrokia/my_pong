/*
*   it's function draws a rectangle on the screen.
*/


void draw_rect(int x_position , int y_position , int width , int height , int red , int green,
              int blue , int opacity)
    {
        SDL_SetRenderDrawColor(g_render , red , green , blue , opacity) ;
        
        SDL_Rect rect ;
        rect.x = x_position ;
        rect.y = y_position ;
        rect.w = width ;
        rect.h = height ;
        SDL_RenderFillRect(g_render , &rect);
    }

void draw_rect(SDL_Rect *rect , int red , int green , int blue , int opacity)
    {
        SDL_SetRenderDrawColor(g_render , red , green , blue , opacity) ;

        SDL_RenderFillRect(g_render , rect);
    }