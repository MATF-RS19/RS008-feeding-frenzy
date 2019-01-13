#ifndef CONSTANTS_H
#define CONSTANTS_H
//this file contains constants

const int GameWindowWidth = 1200;
const int GameWindowHeight =680;
const float GameDeltaTime = 0.033f; //33 milliseconds per frame -> game will run at 30 fps
const int MarginWidthForEnemySpawning = 200; //Enemies will spawn 200 pixels away from screen edges

const int FishSizes[] = {70, 90, 120, 135}; // There are 4 sizes for all fish in game
const int PlayerSpeed = 600;//movement 600 pixels per second

const float FishNeededToWin = 60.0f; //it takes 60kg of fish eaten to win
const float FishEatenToIncreaseSize[] = {8.0f, 24.0f, 48.0f}; //When you eat 8kg of fish you increase in size, and again at 24...

// Amount of seconds which need to pass between fish spawning
const float MinimumDelayForFishToSpawn = 0.2f;
const float MaximumDelayForFishToSpawn = 1.2f;

const float MinimumEnemyFishSpeed = 100;
const float MaximumEnemyFishSpeed = 250;

#endif // CONSTANTS_H
