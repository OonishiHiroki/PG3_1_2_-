#include "Enemy.h"
#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;

Enemy* enemyFirst = new Enemy;
Enemy* enemySecond = new Enemy;
Enemy* enemyThird = new Enemy;


void(Enemy::*Enemy::Attacktable[])() {
	& Enemy::Approach,
	& Enemy::Shooting,
	& Enemy::Breakaway
};

void Enemy::Update() {
	static_cast<size_t>(phase_);
	(this->*Attacktable[0])();
	Sleep(2 * 1000);
	(this->*Attacktable[1])();
	Sleep(2 * 1000);
	(this->*Attacktable[2])();
}

void Enemy::Approach() {
	printf("Ú‹ß\n");
}

void Enemy::Shooting() {
	printf("ËŒ‚\n");
}

void Enemy::Breakaway() {
	printf("—£’E\n");
}