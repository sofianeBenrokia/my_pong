/*
*   this page allows you to initialize the textures.
*/

t_0.new_texture("src/image/0.bmp");
t_1.new_texture("src/image/1.bmp");
t_2.new_texture("src/image/2.bmp");
t_3.new_texture("src/image/3.bmp");
t_4.new_texture("src/image/4.bmp");
t_5.new_texture("src/image/5.bmp");
t_6.new_texture("src/image/6.bmp");
t_7.new_texture("src/image/7.bmp");
t_8.new_texture("src/image/8.bmp");
t_9.new_texture("src/image/9.bmp");

t_pause.new_texture("src/image/pause.bmp");
t_pause.set_xy((g_width - t_pause.get_w()) / 2 , (g_height - t_pause.get_h()) / 4 + g_height / 2);

t_pause_text.new_texture("src/image/pause_text.bmp");
t_pause_text.set_xy((g_width - t_pause_text.get_w()) / 2 , (g_height - t_pause_text.get_h()) / 4 + g_height / 2 + t_pause.get_h());

t_the_first.new_texture("src/image/the_first.bmp");
t_the_first.set_xy((g_width - t_the_first.get_w()) / 2 , (g_height - t_the_first.get_h()) / 4);

t_press_esc.new_texture("src/image/press_esc.bmp");
t_press_esc.set_xy(10,5);

t_player_1_win.new_texture("src/image/player_1_win.bmp");
t_player_1_win.set_xy((g_width - t_player_1_win.get_w()) / 2 ,(g_height - t_player_1_win.get_h()) / 2);

t_player_2_win.new_texture("src/image/player_2_win.bmp");
t_player_2_win.set_xy((g_width - t_player_2_win.get_w()) / 2 ,(g_height - t_player_2_win.get_h()) / 2);

t_racket_1.h  =  g_height / 4 ;
t_racket_1.w  =  t_racket_1.h / 10 ;
t_racket_1.x  =  10  ;
t_racket_1.y  =  (g_height - t_racket_1.h) / 2  ;

t_racket_2.h  =  g_height / 4 ;
t_racket_2.w  =  t_racket_1.h / 10 ;
t_racket_2.x  =  g_width - t_racket_2.w - 10  ;
t_racket_2.y  =  (g_height - t_racket_1.h) / 2  ;

t_ball.h  =  t_racket_1.h / 10         ;
t_ball.w  =  t_ball.h                 ;
t_ball.x  =  (g_width - t_ball.w) /2  ;
t_ball.y  =  (g_height - t_ball.h) /2 ;

t_player_1.new_texture("src/image/player_1.bmp") ;
t_player_1.set_xy(t_racket_1.x + t_racket_1.w + 10 , (g_height - t_player_1.get_h()) / 4);

t_player_2.new_texture("src/image/player_2.bmp") ;
t_player_2.set_xy(t_racket_2.x - t_player_2.get_w() - 10 , (g_height - t_player_2.get_h()) / 4);

t_f.new_texture("src/image/f.bmp");
t_f.set_xy(t_racket_1.x + t_racket_1.w + 10 , t_racket_1.y + t_racket_1.h - t_f.get_h()) ;

t_r.new_texture("src/image/r.bmp");
t_r.set_xy(t_racket_1.x + t_racket_1.w + 10 , t_racket_1.y) ;

t_up.new_texture("src/image/up.bmp") ;
t_up.set_xy(t_racket_2.x - t_up.get_w() - 10 , t_racket_2.y) ;

t_down.new_texture("src/image/down.bmp") ;
t_down.set_xy(t_racket_2.x - t_down.get_w() - 10 , t_racket_2.y + t_racket_2.h - t_f.get_h()) ;