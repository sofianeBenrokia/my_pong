/*
*   global variables are variables that are used throughout the program.
*   they are recognizable by the g_ that starts them.
*/

SDL_Window *g_window = NULL ;

SDL_Renderer *g_render = NULL ;

SDL_Event g_event ;

//  g_height is for the window height.
int g_height  =  GetSystemMetrics(SM_CYSCREEN)  ;

//  g_width is for the width of the window.
int g_width   =  GetSystemMetrics(SM_CXSCREEN)  ;

//  if it is equal to true it means that the game is on pause
bool g_pause_screen = true ;

int g_ball_movement_x = - 10 ;
int g_ball_movement_y = 0 ;

int g_player_1_score = 0 ;
int g_player_2_score = 0 ;