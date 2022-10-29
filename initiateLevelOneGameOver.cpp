#include "initiateLevelOneGameOver.h"

//funtion to load GameOver message
void levelOneGameOverLoad(void)
{

    window.surface = IMG_Load("images/levelone/gameover.png");

    if (!window.surface)
    {
        printf("Level One GameOver Message Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

     L1GameOverMessage.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (! L1GameOverMessage.tex)
    {
        printf("Level One GameOver Message  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture( L1GameOverMessage.tex, NULL, NULL, & L1GameOverMessage.rect.w, & L1GameOverMessage.rect.h);

    L1GameOverMessage.rect.w = (int)575;
    L1GameOverMessage.rect.h = (int)603;
    L1GameOverMessage.rect.x = (int)WINDOW_WIDTH / 2 - 350;
    L1GameOverMessage.rect.y = (int)WINDOW_HEIGHT / 2 - 250;
}
//function to destroy texture of gameover message
void levelOneGameOverCleanUp()
{

    SDL_DestroyTexture(levelOneGameOverMessage.tex);
    IMG_Quit();
}
