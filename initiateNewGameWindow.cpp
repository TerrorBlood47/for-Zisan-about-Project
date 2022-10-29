#include "initiateNewGameWindow.h"

void newgameWindowLoad(void)
{
    //Level-1 start button

    window.surface = IMG_Load("images/buttons/level1.png");

    if (!window.surface)
    {
        printf("newgameWindowL1Button Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    newgameWindowL1Button.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!newgameWindowL1Button.tex)
    {
        printf("newgameWindowL1Button  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(newgameWindowL1Button.tex, NULL, NULL, &newgameWindowL1Button.rect.w, &newgameWindowL1Button.rect.h);
    newgameWindowL1Button.rect.w = (int)330;
    newgameWindowL1Button.rect.h = (int)130;
    newgameWindowL1Button.rect.x = (int)WINDOW_WIDTH / 2 - 165;
    newgameWindowL1Button.rect.y = (int)WINDOW_HEIGHT / 2 - 65;

}

void newGameWindowCleanUp()
{

    SDL_DestroyTexture(newgameWindowL1Button.tex);
    
    IMG_Quit();
}
