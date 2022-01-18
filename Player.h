#pragma once

class Player
{
public:												 //클래스 맨위에 무조건 적어줘야 함
	int HP;
	int MP;
	int Gold;

	void Collect();
	void Move();
	void Attack();
	void Run();
};