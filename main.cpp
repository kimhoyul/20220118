#include<iostream>
#include "Player.h"
#include "Slime.h"
#include "Gobline.h"
#include "WildBoar.h"

using namespace std;

int main()
{
	Player NewPlayer;   //instans(Object)ȭ �Ѵ�.
	NewPlayer.SetHP (-100);
	int CurrentHP = NewPlayer.GetHP();

	return 0;
}