#include "inputs.h"

void doInput(void)
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {

        if (event.type == SDL_QUIT)
        {
            exit(0);
        }
        //level one Key Events

        if (variables.levelOne == 1)
        {
		    if (event.type == SDL_KEYDOWN)
		    {
		    	if (event.key.keysym.scancode == SDL_SCANCODE_SPACE)
                {
                    space = 1;
                } 
	            if (event.key.keysym.scancode == SDL_SCANCODE_UP)
	            {
	                //if player jumps up  color and position are toggled
					printf("-1\n");
					
	                L1CharYpos -= L1Movespeed * L1CharDeltatime + 400;
	                SDL_SetTextureColorMod(L1WindowChar.tex, 255, 255, 255);
	            }
	            else if (event.key.keysym.scancode == SDL_SCANCODE_DOWN)
	            {
	                //if player jumps down  color and position are toggled
					printf("-2\n");
					
	                L1CharYpos += L1Movespeed * L1CharDeltatime + 400;
	                SDL_SetTextureColorMod(L1WindowChar.tex, 255, 255, 255);
	            }
	            
	            
	            /*else if (event.key.keysym.scancode == SDL_SCANCODE_RIGHT)
	            {
	            
	                printf("1\n");
	                
                    
                   levelOneCharacterXposition += 1;
                    
                    
	                
	                SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 255, 255);
	            }
	            else if (event.key.keysym.scancode == SDL_SCANCODE_LEFT)
	            {
	                printf("2\n");
	                levelOneCharacterXposition -= 1;
	                SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 255, 255);
	            }
	            */
	            
	            
		    }
		        
        }

    
    }

    // mouse events for all levels

    int mousex, mousey;
    int buttons = SDL_GetMouseState(&mousex, &mousey);
    if (buttons & SDL_BUTTON(SDL_BUTTON_LEFT))//SDL_BUTTON(SDL_BUTTON_RIGHT) would have made every button working with only right mouse click
    {
    	//level choosing page
        if (variables.gameWindowBegin == 1 && (mousex >= startNewgameButton.rect.x && mousex <= (startNewgameButton.rect.x + startNewgameButton.rect.w) && mousey >= startNewgameButton.rect.y && mousey <= (startNewgameButton.rect.y + startNewgameButton.rect.h)))
        {
            variables.chooseLevel = 1;
            variables.levelOne = 0;
            variables.gameWindowBegin = 0;
            variables.L1Completed = 0;
            
            variables.L1gameOver = 0;
             Mix_VolumeMusic(128); //adjusting volume
            Mix_PlayChannel(-1, click, 0);
        }
        
        if (variables.chooseLevel == 1 && (mousex >= newgameWindowL1Button.rect.x && mousex <= (newgameWindowL1Button.rect.x + newgameWindowL1Button.rect.w) && mousey >= newgameWindowL1Button.rect.y && mousey <= (newgameWindowL1Button.rect.y + newgameWindowL1Button.rect.h)))
        {
            
            variables.levelOne = 1;
            variables.chooseLevel = 0;
            variables.gameWindowBegin = 0;
            variables.L1Completed = 0;
           
            variables.L1gameOver = 0;
            
            Mix_VolumeMusic(7); //adjusting volume
            Mix_PlayMusic(Craddles, 0);
            Mix_PlayChannel(-1, click, 0);
        }


        //after tapping BACK button in the game
        if (mousex >= back.rect.x && mousex <= (back.rect.x + back.rect.w) && mousey >= back.rect.y && mousey <= (back.rect.y + back.rect.h))
        {

            if (variables.L1Completed == 1  || variables.levelOne == 1 || variables.L1gameOver == 1)
            {	 Mix_VolumeMusic(128); //adjusting volume
                Mix_PlayMusic(Start, -1);
            }

            resetAll();
        }
    }
}
 
