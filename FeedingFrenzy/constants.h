#ifndef CONSTANTS_H
#define CONSTANTS_H

const int GameWindowWidth = 800;
const int GameWindowHeight = 450;
const float GameDeltaTime = 0.033f; //16 milliseconds per frame -> game will run at 60 fps
const int MarginWidthForEnemySpawning = 100; //Enemies will spawn 100 pixels away from screen edges
const int MarginWidthForEnemyDestruction = 200; //Enemies will be destroyed if they go 200 pixels away from any edge

const int PlayerStartSize = 75;
const int PlayerSpeed = 500;

#endif // CONSTANTS_H
