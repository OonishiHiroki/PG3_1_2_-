#include "Enemy.h"
#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;

Enemy* enemyFirst = new Enemy;

void(Enemy::* Enemy::Attacktable[])() {
	&Enemy::Approach,
	& Enemy::Shooting,
	& Enemy::Breakaway
};

void Enemy::Update() {
	(this->*Attacktable[static_cast<size_t>(phase_)])();
	Sleep(2 * 1000);
	phase_++;
	if (phase_ >= 3) {
		phase_ = 0;
	}

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