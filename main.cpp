#include "Enemy.h"
#include <stdio.h>
#include <windows.h>
#include <iostream>
using namespace std;

int main() {

	Enemy* enemy = new Enemy;
	while (true) {
		enemy->Update();
	}

	return 0;
}