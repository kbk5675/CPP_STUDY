#include "Field.h"
#include "Monster.h"
#include "Player.h"
#include <stdlib.h>
#include <iostream>
using namespace std;


Field::Field() : _monster(nullptr)
{

}

Field::~Field()
{
	if (_monster != nullptr)
		delete _monster;
}

void Field::Update(Player* player)
{
	if (_monster == nullptr)
		CreateMonster();

	StartBattle(player);
}

void Field::CreateMonster()
{

	int randValue = 1 + rand() % 3;

	switch (randValue)
	{
	case MT_SLIME:
		cout << endl;
		cout << "*****************************" << endl;
		cout << "***** �������� ������!! *****" << endl;
		cout << "***** ������ VS Player  *****" << endl;
		cout << "*****************************" << endl;
		_monster = new Slime();
		break;
	case MT_ORC:
		cout << endl;
		cout << "***************************" << endl;
		cout << "***** ��ũ�� ������!! *****" << endl;
		cout << "***** ��ũ VS Player  *****" << endl;
		cout << "***************************" << endl;
		_monster = new Orc();
		break;
	case MT_SKELETON:
		cout << endl;
		cout << "*******************************" << endl;
		cout << "***** ���̷����� ������!! *****" << endl;
		cout << "***** ���̷��� VS Player  *****" << endl;
		cout << "*******************************" << endl;
		_monster = new Skeleton();
		break;
	default:
		break;
	}
}

void Field::StartBattle(Player* player)
{
	while (true)
	{
		player->PrintInfo();
		_monster->PrintInfo();

		// �÷��̾�-> ���� ����
		_monster->OnAttacked(player);

		if (_monster->IsDead())
		{
			_monster->PrintInfo();
			delete _monster;
			_monster = nullptr;
			break;
		}

		// ����-> �÷��̾� ����
		player->OnAttacked(_monster);
		if (player->IsDead())
		{
			player->PrintInfo();
			break;
		}
	}
}