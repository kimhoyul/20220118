#pragma once
class Monster
{
public:			//캡슐화, 외부 노출 해주겠다. //상속 해주겠다.
	int MP;
private:		//캡슐화, 외부 노출 안해주겠다. //상속 안해주겠다.
	int gold;
public:
	void Move();
	void Attack();
	void Run();

protected:		//캡슐화, 외부 노출 안해주겠다. //상속 해주겠다.
	int HP;

	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}
	int GetHP() const // const 상수, 복사해서 쓰지만 바꾸지 말라는 의미
	{
		return HP;
	}
};

