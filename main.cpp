#include "SceneManager.h"

int sceneNo = 0;

int main() {

	//�C���X�^���X���擾���āA�����g�p
	SceneManager::GetInstance()->ChangeScene(sceneNo);

	return 0;
}