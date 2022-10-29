#include "initiateLifeLoss.h"

//funtion to load life losing effect
void levelOneLifeLossLoad(void)
{

    for (int i = 0; i < 3; i++)
    {

        window.surface = IMG_Load("images/levelone/heartbreak.png");
        if (!window.surface)
        {
            printf("L1LifeLoss[i] surface Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        L1LifeLoss[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
        SDL_FreeSurface(window.surface);
        if (! L1WindowObstacle[i].tex)
        {
            printf("L1LifeLoss[i]  Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        SDL_QueryTexture(L1LifeLoss[i].tex, NULL, NULL, &L1LifeLoss[i].rect.w, &L1LifeLoss[i].rect.h);
        L1LifeLoss[i].rect.w = (int)0;
        L1LifeLoss[i].rect.h = (int)0;
        L1LifeLoss[i].rect.x = L1WindowObstacle[i].rect.x;
        L1LifeLoss[i].rect.y = (int)700;
    }
}

//funtion to destroy the texture of lifelosing
void levelOneLifeLossCleanUp()
{
    for (int i = 0; i < 3; i++)
    {
        SDL_DestroyTexture(L1LifeLoss[i].tex);
    }

    IMG_Quit();
}
