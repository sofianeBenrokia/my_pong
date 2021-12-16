/*
*   this page updates the textures.
*/

#include "update_score.hpp"

//  this rectangle is the middle line.
draw_rect(g_width / 2 , 0 , 1 , g_height , 255 , 255 , 255 , 255);

draw_rect(&t_racket_1 , 255 , 255 , 255 , 255) ;

draw_rect(&t_racket_2 , 255 , 255 , 255 , 255) ;

draw_rect(&t_ball , 255 , 255 , 255 , 255) ;

if (g_pause_screen)
    {
        t_pause.show_texture() ;
        t_pause_text.show_texture() ;
        t_the_first.show_texture() ;
        t_press_esc.show_texture() ;

        t_f.show_texture() ;
        t_r.show_texture() ;
        t_up.show_texture() ;
        t_down.show_texture() ;

        t_player_1.show_texture() ;
        t_player_2.show_texture() ;
    }