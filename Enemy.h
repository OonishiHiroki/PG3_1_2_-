#pragma once
class Enemy {
public:

	int phase_ = 0;

	//���상���o�֐�
	void Approach();
	void Shooting();
	void Breakaway();
	
	void Update();

private:
	static void (Enemy::*Attacktable[])();
};

