#pragma once
#include <iostream>
using namespace std;

class Player
{
public:												//�ۿ��� ��� ����
	Player() //�⺻ ������(constructor)
	{
		cout << "�÷��̾� ����" << endl;
	}

	~Player() //�Ҹ���, �ı���(destructor)
	{
		cout << "�÷��̾� �����" << endl;
	}

private:												//�ۿ��� ��� �Ұ�
	int HP;											//��� ����
	int MP;											//��� ����
	int Gold;										//��� ����


	//�Լ� ���� �� ��ȯ�� const
	//const Player* GetPlayer(); // ��ȯ���� ���� ���� ������.
	//�Լ� ���ڿ� const�� ������ ���ڰ��� �Լ� �ȿ��� �������� �ʽ��ϴ�.
	//void strcpy(char* Dest, const char* Source)�ҽ��� �Լ��ȿ��� �������� �ʽ��ϴ�.
	
	//�Լ� ���� �� const
	//int GetHP() const; // ���Լ��� ��������� �������� �ʽ��ϴ�.
	//������, accessor
public:
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