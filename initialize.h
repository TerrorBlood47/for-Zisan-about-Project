#include "commonHeaders.h"

extern App app;
extern component
    window,
    back;

extern Variables variables;

extern void welcomeWindowLoad(void); // game open korle firstly jei interface asbe

extern void newgameWindowLoad(void);
extern void levelOneWindowLoad(void);
extern void levelOneCompletedLoad(void);
extern void levelOneGameOverLoad();

extern void welcomeWindowCleanUp(void);
extern void newGameWindowCleanUp(void);

extern void levelOneWindowCleanUp(void);
extern void levelOneCompletedCleanUp(void);
extern void levelOneScoreCleanUp();
extern void levelOneObstacleCleanUp();
extern void levelOneLifeLossCleanUp(void);
extern void levelOneCoinsEffectCleanUp(void);
extern void levelOneCoinsCleanUp(void);
extern void levelOneGameOverCleanUp(void);
extern void levelOneLifeCleanUp(void);
