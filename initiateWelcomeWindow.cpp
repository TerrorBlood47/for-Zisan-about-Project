#include "initiateWelcomeWindow.h"

void welcomeWindowLoad(void)
{
    // Welcome Window Backgroud Sky

    window.surface = IMG_Load("./images/frontbackground/sky.png");
    if (!window.surface)
    {
        printf("startSky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    startSky.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!startSky.tex)
    {
        printf("startSky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(startSky.tex, NULL, NULL, &startSky.rect.w, &startSky.rect.h);
    startSky.rect.w = (int)WINDOW_WIDTH;
    startSky.rect.h = (int)400;
    startSky.rect.x = 0;
    startSky.rect.y = 0;

    

    // Welcome Window Backgroud Mountains

    window.surface = IMG_Load("./images/frontbackground/frontmountain.png");
    if (!window.surface)
    {
        printf("startMountains Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    startMountains.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!startMountains.tex)
    {
        printf("startMountains Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(startMountains.tex, NULL, NULL, &startMountains.rect.w, &startMountains.rect.h);
    startMountains.rect.w = (int)WINDOW_WIDTH;
    startMountains.rect.h = (int)800;
    startMountains.rect.x = 0;
    startMountains.rect.y = 200;

    // Welcome Window Backgroud Trees

    window.surface = IMG_Load("./images/frontbackground/fronttree.png");
    if (!window.surface)
    {
        printf("startTrees Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    startTrees.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!startTrees.tex)
    {
        printf("startTrees Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(startTrees.tex, NULL, NULL, &startTrees.rect.w, &startTrees.rect.h);
    startTrees.rect.w = (int)400;
    startTrees.rect.h = (int)WINDOW_HEIGHT;
    startTrees.rect.x = -100;
    startTrees.rect.y = 0;
    

    // Welcome Window Game Logo

    window.surface = IMG_Load("images/riotlogo.png");

    if (!window.surface)
    {
        printf("startGameTitle Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    startGameTitle.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!startGameTitle.tex)
    {
        printf("startGameTitle  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(startGameTitle.tex, NULL, NULL, &startGameTitle.rect.w, &startGameTitle.rect.h);
    
    /* adjusting the poster for wide screen */
    startGameTitle.rect.w = (int)241;
    startGameTitle.rect.h = (int)181;
    startGameTitle.rect.x = (int)WINDOW_WIDTH / 2 - 120;
    startGameTitle.rect.y = (int)WINDOW_HEIGHT / 2 - 460;

    // Welcome Window Play  Button

    window.surface = IMG_Load("images/buttons/START.png");

    if (!window.surface)
    {
        printf("startNewgameButton Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    startNewgameButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!startNewgameButton.tex)
    {
        printf("startNewgameButton  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(startNewgameButton.tex, NULL, NULL, &startNewgameButton.rect.w, &startNewgameButton.rect.h);
    startNewgameButton.rect.w = (int)291;
    startNewgameButton.rect.h = (int)373;
    startNewgameButton.rect.x = (int)WINDOW_WIDTH / 2 - 146;
    startNewgameButton.rect.y = (int)WINDOW_HEIGHT / 2 + 200;
}

void welcomeWindowCleanUp() // cleaning up components textures and surfaces
{

    SDL_DestroyTexture(startSky.tex);
    SDL_DestroyTexture(startMountains.tex);
    SDL_DestroyTexture(startTrees.tex);
    SDL_DestroyTexture(startGameTitle.tex);
    SDL_DestroyTexture(startNewgameButton.tex);
    
    IMG_Quit();
}
