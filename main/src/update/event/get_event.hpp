/*
*   this page allows you to collect all the events.
*/

while(SDL_PollEvent(&g_event))
    {
        if(g_event.type == SDL_KEYDOWN)
            {
                if(g_event.key.keysym.sym == SDLK_ESCAPE)
                    {
                        e_escape_down   =  true  ;
                        e_escape_press  =  true  ;
                    }
                if(g_event.key.keysym.sym == SDLK_UP)
                    {
                        e_up_down   =  true  ;
                        e_up_press  =  true  ;
                    }
                if(g_event.key.keysym.sym == SDLK_DOWN)
                    {
                        e_down_down   =  true  ;
                        e_down_press  =  true  ;
                    }
                if(g_event.key.keysym.sym == SDLK_r)
                    {
                        e_r_down   =  true  ;
                        e_r_press  =  true  ;
                    }
                if(g_event.key.keysym.sym == SDLK_f)
                    {
                        e_f_down   =  true  ;
                        e_f_press  =  true  ;
                    }
                if(g_event.key.keysym.sym == SDLK_SPACE)
                    {
                        e_space_down   =  true  ;
                        e_space_press  =  true  ;
                    }
            }
        
        if(g_event.type == SDL_KEYUP)
            {
                if(g_event.key.keysym.sym == SDLK_ESCAPE)
                    {
                        e_escape_up     =  true   ;
                        e_escape_press  =  false  ;
                    }
                if(g_event.key.keysym.sym == SDLK_UP)
                    {
                        e_up_up     =  true   ;
                        e_up_press  =  false  ;
                    }
                if(g_event.key.keysym.sym == SDLK_DOWN)
                    {
                        e_down_up     =  true   ;
                        e_down_press  =  false  ;
                    }
                if(g_event.key.keysym.sym == SDLK_r)
                    {
                        e_r_up     =  true   ;
                        e_r_press  =  false  ;
                    }
                if(g_event.key.keysym.sym == SDLK_f)
                    {
                        e_f_up     =  true   ;
                        e_f_press  =  false  ;
                    }
                if(g_event.key.keysym.sym == SDLK_SPACE)
                    {
                        e_space_up     =  true   ;
                        e_space_press  =  false  ;
                    }
            }
    }