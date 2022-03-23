#pragma once


// is - a �����
// has - a ����� �����ض�


// ���漱�� -> ���߿� ���� �������״ϱ� �ϴ��� ���������� ����.
class Player;
class Field;

class Game
{
public:
	Game();
	~Game();

	void Init();
	void Update();

	void CreatePlayer();

private:
	
	//Player _player; // �̷��� ������ ��, Knight���� playerŬ������ ����ϴ�
					  // ��쿡 ������ ©�� ���� �Ͼ �� �ִ�!
					  // ex) Knight Ŭ������ �޸� [   [Player]   ] 
					  //     Player Ŭ������ �޸�     [Player] 
					  // �̱� �����̴�.

	Player* _player;
	// [ 4~8 ] --->> [       ]
	// �����ͷ� �����,
	// ���� �÷��̾�� �����ϰ� ���Ӿȿ� 
	// �÷��̾ ã�ư��� ���� �ּҰ��� ����.
	
	Field* _field;

};

