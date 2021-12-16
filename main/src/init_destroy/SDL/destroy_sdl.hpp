/*
*   this page allows you to quit the SDL.
*/

SDL_DestroyRenderer(g_render);

SDL_DestroyWindow(g_window);

SDL_Quit;