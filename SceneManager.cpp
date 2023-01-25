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
//	//関数内static変数として宣言する
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
//				printf("Titleシーン\n");
//				sceneNo = 1;
//				break;
//			case 1:
//				Sleep(2 * 1000);
//				printf("NewGameシーン\n");
//				sceneNo = 2;
//				break;
//			case 2:
//				Sleep(2 * 1000);
//				printf("GamePlayシーン\n");
//				sceneNo = 3;
//				break;
//			case 3:
//				Sleep(2 * 1000);
//				printf("GameClearシーン\n");
//				sceneNo = 0;
//				break;
//		}
//	}
//}
