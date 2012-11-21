#include "GameArea.h"
#include <iostream>
#include <vector>

using namespace std;

//vector<GameArea> GameArea::mVecOfMapObject;

void Player::increaseLevel()
{
  mCurrentLevel++;

}

void Player::increaseMoney(int amount)
{
  mMoney += amount;
}

void Player::decreaseMoney(int amount)
{
  mMoney -=amount;
}


//--------------------------------

void SpawnArea::spawnModeOn()
{
  mSpawnMode = true;
}

void SpawnArea::spawnModeOff()
{
  mSpawnMode = false;
}

//--------------------------------

void BuildSite::occupy()
{
  mOccupied = true;
}

void BuildSite::unOccupy()
{
  mOccupied = false;
}
