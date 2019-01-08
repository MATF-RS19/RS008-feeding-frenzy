#ifndef CONSTANTS_H
#define CONSTANTS_H

const int GameWindowWidth = 1200;
const int GameWindowHeight =680;
const float GameDeltaTime = 0.033f; //16 milliseconds per frame -> game will run at 60 fps
const int MarginWidthForEnemySpawning = 200; //Enemies will spawn 100 pixels away from screen edges

const int SizeMilestones[] = {70, 90, 120, 135}; // There are 4 sizes for all fish in game
const int PlayerSpeed = 500;

const float FishNeededToWin = 60.0f;
const float FistEatenToIncreaseSize[] = {8.0f, 24.0f, 48.0f}; //When you eat 8kg of fish you increase in size, and again at 16...

#endif // CONSTANTS_H
