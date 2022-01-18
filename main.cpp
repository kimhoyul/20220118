#include<iostream>
#include "Player.h"
#include "Slime.h"
#include "Gobline.h"
#include "WildBoar.h"

using namespace std;

int main()
{
	Player NewPlayer;   //instans(Object)È­ ÇÑ´Ù.
	Slime Slime;

	NewPlayer.HP = 100;
	NewPlayer.Gold = 10;
	NewPlayer.Collect();
	NewPlayer.Move();
	NewPlayer.Attack();
	NewPlayer.Run();

	Slime.HP = 20;
	Slime.Move();
	Slime.Attack();
	Slime.Run();


	return 0;
}