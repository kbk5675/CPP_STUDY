#pragma once


class Player
{
public:
	void KillMonster();

	void KillMonster2();
public:
	int _hp;
	int attack;

	class Monster* _target2; // �տ� class ������ ���漱��.

	Player* _target;
};

