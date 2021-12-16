/*
*   this class allows you to create a texture and use it easily.
*/

class Texture
    {
        public:
            Texture() : m_texture(NULL) {}


            void new_texture(const char *TEXTURE_PATH)
            /*method*/
                {
                    SDL_Surface *temp = NULL ;

                    temp = SDL_LoadBMP(TEXTURE_PATH) ;

                    m_texture = SDL_CreateTextureFromSurface(g_render , temp) ;

                    SDL_FreeSurface(temp) ;

                    SDL_QueryTexture(m_texture , NULL , NULL , &m_rect.w , &m_rect.h) ;
                }


            void set_xy(int x , int y)
            /*method*/
                {
                    m_rect.x = x ;
                    m_rect.y = y ;
                }


            int get_w() /*method*/ {return m_rect.w ;}


            int get_h() /*method*/ {return m_rect.h ;}


            void destroy_texture()
            /*method*/
                {
                    SDL_DestroyTexture(m_texture);
                    m_texture = NULL ;
                }


            void show_texture() /*method*/ {SDL_RenderCopy(g_render , m_texture , NULL , &m_rect);}
        
        private:

            SDL_Texture  *m_texture  ;
            SDL_Rect      m_rect     ;
    };