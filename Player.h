#pragma once

class Player
{
public:												//밖에서 사용 불가
	int HP;											//멤버 변수
private :
	int MP;											//멤버 변수
	int Gold;										//멤버 변수

public:												//밖에서 사용 가능

	//함수 제일 앞 반환형 const
	//const Player* GetPlayer(); // 반환값을 수정 하지 마세요.
	//함수 인자에 const가 붙으면 인자값을 함수 안에서 변경하지 않습니다.
	//void strcpy(char* Dest, const char* Source)소스는 함수안에서 변경하지 않습니다.
	
	//함수 제일 뒤 const
	//int GetHP() const; // 이함수는 멤버변수를 변경하지 않습니다.
	//접근자, accessor
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
	void Collect();
	void Move();
	void Attack();
	void Run();
};