#include "SceneManager.h"

int sceneNo = 0;

int main() {

	//インスタンスを取得して、すぐ使用
	SceneManager::GetInstance()->ChangeScene(sceneNo);

	return 0;
}