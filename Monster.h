#pragma once
class Monster
{
public:			//ĸ��ȭ, �ܺ� ���� ���ְڴ�. //��� ���ְڴ�.
	int MP;
private:		//ĸ��ȭ, �ܺ� ���� �����ְڴ�. //��� �����ְڴ�.
	int gold;
public:
	void Move();
	void Attack();
	void Run();

protected:		//ĸ��ȭ, �ܺ� ���� �����ְڴ�. //��� ���ְڴ�.
	int HP;

	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}
	int GetHP() const // const ���, �����ؼ� ������ �ٲ��� ����� �ǹ�
	{
		return HP;
	}
};

