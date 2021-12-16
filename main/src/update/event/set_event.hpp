/*
*    this page allows you to use the events collect.
*/

if(e_space_up  &&   g_pause_screen)
            g_pause_screen  =  false ;
    else if(e_space_up  &&  !g_pause_screen)
            g_pause_screen  =  true  ;

if         (!g_pause_screen && e_f_press && t_racket_1.y + RACKET_SPEEDS <= g_height - t_racket_1.h) 
                t_racket_1.y  +=  RACKET_SPEEDS           ;
    else if(!g_pause_screen && e_f_press && t_racket_1.y + RACKET_SPEEDS > g_height - t_racket_1.h)
                t_racket_1.y   =  g_height - t_racket_1.h ;

if         (!g_pause_screen && e_r_press && t_racket_1.y - RACKET_SPEEDS >= 0) 
                t_racket_1.y  -=  RACKET_SPEEDS           ;
    else if(!g_pause_screen && e_r_press && t_racket_1.y - RACKET_SPEEDS < 0)
                t_racket_1.y   =  0 ;

if         (!g_pause_screen && e_down_press && t_racket_2.y + RACKET_SPEEDS <= g_height - t_racket_2.h) 
                t_racket_2.y  +=  RACKET_SPEEDS           ;
    else if(!g_pause_screen && e_down_press && t_racket_2.y + RACKET_SPEEDS > g_height - t_racket_2.h)
                t_racket_2.y   =  g_height - t_racket_2.h ;

if         (!g_pause_screen && e_up_press && t_racket_2.y - RACKET_SPEEDS >= 0) 
                t_racket_2.y  -=  RACKET_SPEEDS           ;
    else if(!g_pause_screen && e_up_press && t_racket_2.y - RACKET_SPEEDS < 0)
                t_racket_2.y   =  0 ;