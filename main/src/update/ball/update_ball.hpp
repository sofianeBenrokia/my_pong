/*
*   this page updates the movement of the bale.
*   it is on this page that the scores are added and that the win screen is displayed.
*/

if(!g_pause_screen)
    {
        if(t_ball.y + g_ball_movement_y < 0 || t_ball.y + t_ball.h + g_ball_movement_y > g_height)
            g_ball_movement_y *= -1 ;
        
        if(g_ball_movement_x < 0)
                {
                    if(t_ball.x + g_ball_movement_x < t_racket_1.x + t_racket_1.w)
                            if(t_ball.y + g_ball_movement_y > t_racket_1.y - t_ball.h && t_ball.y + g_ball_movement_y < t_racket_1.y + t_racket_1.h)
                                    {
                                        int temp = ((t_ball.y + t_ball.h /2) - (t_racket_1.y + t_racket_1.h / 2)) * 100 / (t_racket_1.h / 2 * 100 / 70) ;

                                        if(temp < 0)
                                                {
                                                    g_ball_movement_y = temp * BALL_SPEEDS / 100 ; 
                                                    g_ball_movement_x = BALL_SPEEDS + g_ball_movement_y ;
                                                }
                                            else 
                                                {
                                                    g_ball_movement_y = temp * BALL_SPEEDS / 100 ; 
                                                    g_ball_movement_x = BALL_SPEEDS - g_ball_movement_y ;
                                                }
                                    }
                                else
                                    {
                                        t_ball.x  =  (g_width - t_ball.w) /2  ;
                                        t_ball.y  =  (g_height - t_ball.h) /2 ;
                                        g_ball_movement_x  =  -10 ;
                                        g_ball_movement_y  =   0  ;

                                        g_player_2_score++ ;
                                        if(g_player_2_score > 9)
                                            {
                                                SDL_SetRenderDrawColor(g_render , 0 , 0 , 0 , 255);
                                                SDL_RenderClear(g_render);
                                                t_player_2_win.show_texture();
                                                e_escape_press = true ;
                                                SDL_RenderPresent(g_render);
                                                SDL_Delay(3000);
                                            }
                                    }

                    t_ball.x += g_ball_movement_x ;
                    t_ball.y += g_ball_movement_y ;
                }
            else
                {
                    if(t_ball.x + g_ball_movement_x > t_racket_2.x - t_racket_2.w)
                        if(t_ball.y + g_ball_movement_y > t_racket_2.y - t_ball.h && t_ball.y + g_ball_movement_y < t_racket_2.y + t_racket_2.h)
                                    {
                                        int temp = ((t_ball.y + t_ball.h /2) - (t_racket_2.y + t_racket_2.h / 2)) * 100 / (t_racket_2.h / 2 * 100 / 70) ;

                                        if(temp < 0)
                                                {
                                                    g_ball_movement_y = temp * BALL_SPEEDS / 100 ; 
                                                    g_ball_movement_x = -BALL_SPEEDS - g_ball_movement_y ;
                                                }
                                            else 
                                                {
                                                    g_ball_movement_y = temp * BALL_SPEEDS / 100 ; 
                                                    g_ball_movement_x = -BALL_SPEEDS + g_ball_movement_y ;
                                                }
                                    }
                                else
                                    {
                                        t_ball.x  =  (g_width - t_ball.w) /2  ;
                                        t_ball.y  =  (g_height - t_ball.h) /2 ;
                                        g_ball_movement_x  =   10 ;
                                        g_ball_movement_y  =   0  ;

                                        g_player_1_score++ ;
                                        if(g_player_1_score > 9)
                                            {
                                                SDL_SetRenderDrawColor(g_render , 0 , 0 , 0 , 255);
                                                SDL_RenderClear(g_render);
                                                t_player_1_win.show_texture();
                                                e_escape_press = true ;
                                                SDL_RenderPresent(g_render);
                                                SDL_Delay(3000);
                                            }
                                    }

                    t_ball.x += g_ball_movement_x ;
                    t_ball.y += g_ball_movement_y ;
                }
    }
