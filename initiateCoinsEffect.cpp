#include "initiateCoinsEffect.h"

//funtion to load the effect after collecting coins
void levelOneCoinsEffectLoad(void)
{
    for (int i = 0; i < 5; i++)
    {
        window.surface = IMG_Load("images/levelone/point.png");

        if (!window.surface)
        {
            printf("pointseffect[i] Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        L1WindowPointEffect[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
        SDL_FreeSurface(window.surface);
        if (!L1WindowPointEffect[i].tex)  //if (!levelOneWindowCoinsEffect[i].tex)
        {
            printf("pointseffects[i] Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        SDL_QueryTexture(L1WindowPointEffect[i].tex, NULL, NULL, &L1WindowPointEffect[i].rect.w, &L1WindowPointEffect[i].rect.h);//levelOneWindowCoinsEffect[i].tex
        L1WindowPointEffect[i].rect.w = (int)0;
        L1WindowPointEffect[i].rect.h = (int)0;
        L1WindowPointEffect[i].rect.x = (int)0;
        L1WindowPointEffect[i].rect.y = L1WindowPoints[i].rect.y;
    }
}

//function to destroy the textures of coinseffect
void levelOneCoinsEffectCleanUp()
{
    for (int i = 0; i < 5; i++)
    {
        SDL_DestroyTexture(L1WindowPointEffect[i].tex);
    }

    IMG_Quit();
}
