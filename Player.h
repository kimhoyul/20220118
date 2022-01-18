#pragma once

class Player
{
public:												//�ۿ��� ��� �Ұ�
	int HP;											//��� ����
private :
	int MP;											//��� ����
	int Gold;										//��� ����

public:												//�ۿ��� ��� ����

	//�Լ� ���� �� ��ȯ�� const
	//const Player* GetPlayer(); // ��ȯ���� ���� ���� ������.
	//�Լ� ���ڿ� const�� ������ ���ڰ��� �Լ� �ȿ��� �������� �ʽ��ϴ�.
	//void strcpy(char* Dest, const char* Source)�ҽ��� �Լ��ȿ��� �������� �ʽ��ϴ�.
	
	//�Լ� ���� �� const
	//int GetHP() const; // ���Լ��� ��������� �������� �ʽ��ϴ�.
	//������, accessor
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
	void Collect();
	void Move();
	void Attack();
	void Run();
};