#include "Enemy.h"
#include <stdio.h>
#include <windows.h>
#include <iostream>
using namespace std;

bool Enemy::isEnemyAlive;

int main() {

	Enemy* enemyFirst = new Enemy;
	Enemy* enemySecond = new Enemy;
	Enemy* enemyThird = new Enemy;

	cout << Enemy::isEnemyAlive << endl;
	cout << Enemy::isEnemyAlive << endl;
	cout << Enemy::isEnemyAlive << endl;

	Sleep(2 * 1000);

	delete enemyFirst;

	cout << Enemy::isEnemyAlive << endl;
	cout << Enemy::isEnemyAlive << endl;
	cout << Enemy::isEnemyAlive << endl;

	return 0;
}