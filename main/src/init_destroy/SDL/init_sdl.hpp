/*
*   this page is used to initialize the SDL.
*/

SDL_Init(SDL_INIT_VIDEO);

g_window = SDL_CreateWindow("test",0,0,g_width,g_height,SDL_WINDOW_BORDERLESS);

g_render = SDL_CreateRenderer(g_window,-1,0);