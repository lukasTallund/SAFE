#ifndef GAMEAREA_H
#define GAMEAREA_H

using namespace std;
#include <iostream>
#include <vector>

class GameArea
{
  //static vector<GameArea> mVecOfMapObject;
};

//--------------------------------

class Object : public GameArea
{
};

//--------------------------------

class Player : public Object
{
  // Datamedlemmar
  int mCurrentLevel;
  int mLife;
  int mMoney;

  //Funktioner
  void increaseLevel();
  void increaseMoney(int);
  void decreaseMoney(int);

};

//--------------------------------

class MapObject : public Object
{
};

class SpawnArea : public MapObject
{
  // Datamedlemmar
  bool mSpawnMode;
  int mSpawnTimer;
  int mSpawnFreq;
  
  //Funktioner
  void spawnModeOn();
  void spawnModeOff();
};

class Road : public MapObject
{
};

class BuildSite : public MapObject
{
  //datamedlemmar
  bool mOccupied;
  //funktioner
  void occupy();
  void unOccupy();

};

class Seahorse : public MapObject
{
};

//--------------------------------

class GameObject : public Object
{
};

class Tower : public GameObject
{
  int mRange;
  int mDamage;
};

class Enemy : public GameObject
{
  int mHitPoints;
  int mSpeed;
};
//--------------------------------

#endif
