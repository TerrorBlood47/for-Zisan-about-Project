#include "initiateLevelOneWindow.h"

void levelOneWindowLoad(void)
{
	
    //sky load

    window.surface = IMG_Load("images/levelone/sky.png");

    if (!window.surface)
    {
        printf("L1WindowSky Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1WindowSky.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!L1WindowSky.tex)
    {
        printf("sky_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1WindowSky.tex, NULL, NULL, &L1WindowSky.rect.w, &L1WindowSky.rect.h);
    L1WindowSky.rect.w = (int)WINDOW_WIDTH;
    L1WindowSky.rect.h = (int)WINDOW_HEIGHT;
    L1WindowSky.rect.x = (int)0;
    L1WindowSky.rect.y = (int)0;

	

    //Moon load
    window.surface = IMG_Load("images/levelone/Moon.png");

    if (!window.surface)
    {
        printf("L1WindowMoon surface  Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1WindowMoon.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!L1WindowMoon.tex)
    {
        printf("L1WindowMoon  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1WindowMoon.tex, NULL, NULL, &L1WindowMoon.rect.w, &L1WindowMoon.rect.h);
    L1WindowMoon.rect.w = (int)700;
    L1WindowMoon.rect.h = (int)400;
    L1WindowMoon.rect.x = WINDOW_WIDTH / 2 + 100;
    L1WindowMoon.rect.y = 20;

    //clouds load
    window.surface = IMG_Load("images/levelone/clouds-min.png");

    if (!window.surface)
    {
        printf("L1WindowClouds Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1WindowClouds.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!L1WindowClouds.tex)
    {
        printf("L1WindowClouds Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1WindowClouds.tex, NULL, NULL, &L1WindowClouds.rect.w, &L1WindowClouds.rect.h);
    L1WindowClouds.rect.w = (int)WINDOW_WIDTH - 200;
    L1WindowClouds.rect.h = (int)226;
    L1WindowClouds.rect.x = (int)0;
    L1WindowClouds.rect.y = 50;

    //Builds load

    window.surface = IMG_Load("images/levelone/build.png");

    if (!window.surface)
    {
        printf("L1WindowBuild Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1WindowBuild.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!L1WindowBuild.tex)
    {
        printf("L1WindowBuild Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1WindowBuild.tex, NULL, NULL, &L1WindowBuild.rect.w, &L1WindowBuild.rect.h);
    L1WindowBuild.rect.w = (int)WINDOW_WIDTH;
    L1WindowBuild.rect.h = (int)650;
    L1WindowBuild.rect.x = (int)0;
    L1WindowBuild.rect.y = (int)300;	

    //treeshade load
    window.surface = IMG_Load("images/levelone/lamp.png");

    if (!window.surface)
    {
        printf("L1WindowTreeShade Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1WindowTreeShade.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!L1WindowTreeShade.tex)
    {
        printf("L1WindowTreeShade  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1WindowTreeShade.tex, NULL, NULL, &L1WindowTreeShade.rect.w, &L1WindowTreeShade.rect.h);
    L1WindowTreeShade.rect.w = (int)WINDOW_WIDTH;
    L1WindowTreeShade.rect.h = (int)357;
    L1WindowTreeShade.rect.x = (int)0;
    L1WindowTreeShade.rect.y = (int)450;

    // trees load
    window.surface = IMG_Load("images/levelone/fench.png");

    if (!window.surface)
    {
        printf("L1WindowTrees Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1WindowTrees.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!L1WindowTrees.tex)
    {
        printf("L1WindowTrees  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1WindowTrees.tex, NULL, NULL, &L1WindowTrees.rect.w, &L1WindowTrees.rect.h);
    L1WindowTrees.rect.w = (int)WINDOW_WIDTH;
    L1WindowTrees.rect.h = (int)207;
    L1WindowTrees.rect.x = (int)0;
    L1WindowTrees.rect.y = (int)600;

    //track load
    window.surface = IMG_Load("images/levelone/track.png");

    if (!window.surface)
    {
        printf("L1WindowTrack Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1WindowTrack.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!L1WindowTrack.tex)
    {
        printf("L1WindowTrack Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1WindowTrack.tex, NULL, NULL, &L1WindowTrack.rect.w, &L1WindowTrack.rect.h);
    L1WindowTrack.rect.w = (int)WINDOW_WIDTH;
    L1WindowTrack.rect.h = (int)200;
    L1WindowTrack.rect.x = (int)0;
    L1WindowTrack.rect.y = (int)790;


    //character load
    window.surface = IMG_Load("images/levelone/run2.png");

    if (!window.surface)
    {
        printf("L1WindowCharacter  surface  Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1WindowChar.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!L1WindowChar.tex)
    {
        printf("L1WindowChar Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1WindowChar.tex, NULL, NULL, &L1CharTexWidth, &L1CharTexHeight);//SDL_QueryTexture(levelOneWindowCharacter.tex, NULL, NULL, &levelOneCharacterTexturewidth, &levelOneCharacterTextureheight);
    L1CharFrameWidth = L1CharTexWidth / 4 + 1;
    L1CharFrameHeight = L1CharTexHeight / 2;
    L1WindowChar.rect.w = L1CharFrameWidth ;
    L1WindowChar.rect.h = L1CharFrameHeight;
    L1WindowChar.rect.x = 0;
    L1WindowChar.rect.y = 0;
    CharFramePos.rect.w = L1CharFrameWidth  - 140; // character sprite mota hoy plus korle, cikon hoy minus korle
    CharFramePos.rect.h = L1CharFrameHeight - 150;
    CharFramePos.rect.x = L1CharXpos;
    CharFramePos.rect.y = 665;



    //L1Finish load
    window.surface = IMG_Load("images/levelone/finish.png");

    if (!window.surface)
    {
        printf("L1Finish Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    L1Finish.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!L1Finish.tex)
    {
        printf("L1Finish Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(L1Finish.tex, NULL, NULL, &L1Finish.rect.w, &L1Finish.rect.h);
    L1Finish.rect.w = (int)200;
    L1Finish.rect.h = (int)600;
    L1Finish.rect.x = (int)curzonPosition;
    L1Finish.rect.y = (int)260;



    //initialInstruction load

    window.surface = IMG_Load("images/newcomponents/instruction.png");

    if (!window.surface)
    {
        printf("initial Instructions Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    initialInstructions.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!initialInstructions.tex)
    {
        printf("initial Instructions Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(initialInstructions.tex, NULL, NULL, &initialInstructions.rect.w, &initialInstructions.rect.h);
    initialInstructions.rect.w = (int)472;
    initialInstructions.rect.h = (int)465;
    initialInstructions.rect.x = (int)WINDOW_WIDTH / 2 - 236;
    initialInstructions.rect.y = (int)WINDOW_HEIGHT / 2 - 232;

    //function calling to load rewards and obstacles and effects

    levelOneCoinsLoad();
    levelOneObstacleLoad();
    levelOneCoinsEffectLoad();
    levelOneLifeLoad();
    levelOneLifeLossLoad();
}
// function to destroy all the textures used
void levelOneWindowCleanUp()
{

    SDL_DestroyTexture(L1WindowSky.tex);
    SDL_DestroyTexture(L1WindowBuild.tex);
    SDL_DestroyTexture(L1WindowTreeShade.tex);
    SDL_DestroyTexture(L1WindowTrees.tex);
    SDL_DestroyTexture(L1WindowClouds.tex);
    SDL_DestroyTexture(L1WindowTrack.tex);
    SDL_DestroyTexture(L1WindowChar.tex);
    SDL_DestroyTexture(initialInstructions.tex);
    SDL_DestroyTexture(L1Finish.tex);
    SDL_DestroyTexture(L1WindowMoon.tex);
    IMG_Quit();
}
