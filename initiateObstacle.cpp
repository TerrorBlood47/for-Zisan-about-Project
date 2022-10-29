#include "initiateObstacle.h"

//function to load obstacles of levelone
void levelOneObstacleLoad(void)
{
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            window.surface = IMG_Load("images/levelone/obstacles/zombie1.png");
            if (!window.surface)
            {
                printf(" L1WindowObstacle1_[i] Error: %s\n", IMG_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            L1WindowObstacle[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
            SDL_FreeSurface(window.surface);
            if (!L1WindowObstacle[i].tex)
            {
                printf(" L1WindowObstacle1_[i] Texture %s\n", SDL_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            SDL_QueryTexture(L1WindowObstacle[i].tex, NULL, NULL, & L1WindowObstacle[i].rect.w, & L1WindowObstacle[i].rect.h);
             L1WindowObstacle[i].rect.w = (int)160;
             L1WindowObstacle[i].rect.h = (int)140;
             L1WindowObstacle[i].rect.x = (int)WINDOW_WIDTH + 100;
             L1WindowObstacle[i].rect.y = (int)700;
        }

        if (i == 1)
        {
            window.surface = IMG_Load("images/levelone/obstacles/zombie2.png");
            if (!window.surface)
            {
                printf(" L1WindowObstacle2_[i] Error: %s\n", IMG_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            L1WindowObstacle[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
            SDL_FreeSurface(window.surface);
            if (!L1WindowObstacle[i].tex)
            {
                printf(" L1WindowObstacle2_[i]_  Texture %s\n", SDL_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            SDL_QueryTexture(L1WindowObstacle[i].tex, NULL, NULL, &L1WindowObstacle[i].rect.w, &L1WindowObstacle[i].rect.h);
            L1WindowObstacle[i].rect.w = (int)224;
            L1WindowObstacle[i].rect.h = (int)136;
            L1WindowObstacle[i].rect.x = (int)WINDOW_WIDTH + 100;
            L1WindowObstacle[i].rect.y = (int)700;
        }

        if (i == 2)
        {
            window.surface = IMG_Load("images/levelone/obstacles/zombieboss.png");
            if (!window.surface)
            {
                printf("L1WindowObstacle3_[i] Error: %s\n", IMG_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            L1WindowObstacle[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
            SDL_FreeSurface(window.surface);
            if (!L1WindowObstacle[i].tex)
            {
                printf("L1WindowObstacle3_[i]  Texture %s\n", SDL_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            SDL_QueryTexture(L1WindowObstacle[i].tex, NULL, NULL, &L1WindowObstacle[i].rect.w, &L1WindowObstacle[i].rect.h);
            L1WindowObstacle[i].rect.w = (int)102;
            L1WindowObstacle[i].rect.h = (int)93;
            L1WindowObstacle[i].rect.x = (int)WINDOW_WIDTH * 3;
            L1WindowObstacle[i].rect.y = (int)700;
        }
    }
}



//funtion to destroy the textures of obstacles
void levelOneObstacleCleanUp()
{
    for (int i = 0; i < 3; i++)
    {
        SDL_DestroyTexture(L1WindowObstacle[i].tex);
    }
}
