#include<iostream>
#include "Player.h"
#include "Slime.h"
#include "Gobline.h"
#include "WildBoar.h"
#include <vector> //크기가 바뀌는 배열, STL 사용

using namespace std;

int main()
{
	vector<Player*> PlayerList;

	PlayerList.push_back(new Player());
	PlayerList.push_back(new Player());
	PlayerList.push_back(new Player());
	PlayerList.push_back(new Player());

		cout << PlayerList.size() << endl;

		for (int i = 0; i < PlayerList.size(); ++i)
		{
			cout << "Player " << (i + 1) << " 번째 HP : " << PlayerList[i]->GetHP() << endl;
		}
		for (size_t i = 0; i < PlayerList.size(); ++i)
		{
			delete PlayerList[i];
		}

		PlayerList.clear();

		cout << PlayerList.size() << endl;

	return 0;
}