//#include "SceneManager.h"
//#include <stdio.h>
//#include <windows.h>
//SceneManager::SceneManager() {
//
//}
//SceneManager::~SceneManager() {
//
//}
//SceneManager* SceneManager::GetInstance() {
//	//�֐���static�ϐ��Ƃ��Đ錾����
//	static SceneManager instance;
//
//	return &instance;
//}
//void SceneManager::ChangeScene(int sceneNo) {
//
//	while (true) {
//		switch (sceneNo) {
//			case 0:
//				Sleep(2 * 1000);
//				printf("Title�V�[��\n");
//				sceneNo = 1;
//				break;
//			case 1:
//				Sleep(2 * 1000);
//				printf("NewGame�V�[��\n");
//				sceneNo = 2;
//				break;
//			case 2:
//				Sleep(2 * 1000);
//				printf("GamePlay�V�[��\n");
//				sceneNo = 3;
//				break;
//			case 3:
//				Sleep(2 * 1000);
//				printf("GameClear�V�[��\n");
//				sceneNo = 0;
//				break;
//		}
//	}
//}
