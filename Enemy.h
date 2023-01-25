#pragma once
class Enemy {
public:

	int phase_ = 0;

	//©ìƒƒ“ƒoŠÖ”
	void Approach();
	void Shooting();
	void Breakaway();
	
	void Update();

private:
	static void (Enemy::*Attacktable[])();
};

