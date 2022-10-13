#include <iostream>
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"
#include <vector>

using namespace std;

int main()
{
	/*AWall* MyWall = new AWall();
	AFloor* MyFloor = new AFloor();
	APlayer* MyPlayer = new APlayer();
	AGoal* MyGoal = new AGoal();

	MyPlayer->X = 10;
	MyPlayer->Y = 10;

	MyWall->Draw();
	MyFloor->Draw();
	MyPlayer->Draw();
	MyGoal->Draw();*/


	/*delete MyWall;
	delete MyFloor;
	delete MyPlayer;
	delete MyGoal;*/

	vector<AWall*> MyWalls;

	MyWalls.push_back(new AWall(0, 0));
	MyWalls.push_back(new AWall(1, 0));
	MyWalls.push_back(new AWall(1, 1));

	for (auto Value : MyWalls)
	{
		Value->Draw();
	}



	for (auto Value : MyWalls)
	{
		delete Value;
	}
	MyWalls.clear();

	return 0;
}