//
// Created by viviane on 24/11/2021.
//

#include "SpriteLoader.h"

SpriteLoader::SpriteLoader() {

}

/*SpriteLoader::SpriteLoader(AssetManager* assets, WindowManager* window) {
    Being::setAssetManager(assets);
    Being::setWindowManager(window);
    run();
}*/

SpriteLoader::~SpriteLoader() {

}

void SpriteLoader::run() {

    loadFailedTexture();

    loadBackgrounds();

    loadEnemies();

    loadObstacles();

    loadPlayers();

    loadProjectiles();

}

void SpriteLoader::loadFailedTexture(){
    assets->loadSprite(FAILED_TEXTURE, "failedTexture");
}

void SpriteLoader::loadBackgrounds() {
    assets->loadSprite(HEALTHY_FOREST, "healthyForest");
    assets->loadSprite(INFECTED_FOREST, "infectedForest");
}

void SpriteLoader::loadEnemies(){
    assets->loadSprite(WEAK_GOBLIN, "weakGoblin");
    assets->loadSprite(STRONG_GOBLIN, "strongGoblin");
    assets->loadSprite(BOSS_GOBLIN, "bossGoblin");
}


void SpriteLoader::loadObstacles(){
    assets->loadSprite(SPIKES_PATH,"spikes");
    assets->loadSprite(POINTY_BUSH,"pointyBush");
    assets->loadSprite(FIRE_PIT,"firePit");
}

void SpriteLoader::loadPlatforms() {
    assets->loadSprite(PLATFORM, "platform");
}

void SpriteLoader::loadPlayers(){
    assets->loadSprite(PLAYER_1,"player1");
    assets->loadSprite(PLAYER_2,"player2");
}

void SpriteLoader::loadProjectiles(){
    assets->loadSprite(PLAYER_ORB, "playerOrb");
    assets->loadSprite(DARK_ENERGY_ORB, "darkEnergyOrb");
    assets->loadSprite(ENERGY_ORB, "energyOrb");
}