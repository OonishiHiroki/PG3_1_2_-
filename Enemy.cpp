#include "Enemy.h"
#include <stdio.h>
Enemy::Enemy() {
	isEnemyAlive = true;
}

Enemy::~Enemy() {
	isEnemyAlive = false;
}

