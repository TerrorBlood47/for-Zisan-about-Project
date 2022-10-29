#include "initiateLevelOneCompleted.h"

//funtion to load levelOne completed message
void levelOneCompletedLoad(void)
{
    // overlay load

    window.surface = IMG_Load("images/levelone/overlay-min.png");

    if (!window.surface)
    {
        printf("L1CompletedOverlay surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1CompletedOverlay.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!L1CompletedOverlay.tex)
    {
        printf("L1CompletedOverlay  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1CompletedOverlay.tex, NULL, NULL, &L1CompletedOverlay.rect.w, &L1CompletedOverlay.rect.h);
    L1CompletedOverlay.rect.w = (int)WINDOW_WIDTH;
    L1CompletedOverlay.rect.h = (int)WINDOW_HEIGHT;
    L1CompletedOverlay.rect.x = (int)0;
    L1CompletedOverlay.rect.y = (int)0;


}

// funtion to destroy textures of levelOne completed
void levelOneCompletedCleanUp()
{

    SDL_DestroyTexture(L1CompletedOverlay.tex);
    SDL_DestroyTexture(L1CompletedMessage.tex);
    IMG_Quit();
}
