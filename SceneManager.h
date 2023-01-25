#pragma once
class ChangeScene final{
private:
	//コンストラクタをprivateにする
	ChangeScene();
	//デストラクタをprivateにする
	~ChangeScene();
public:
	//コピーコンストラクタを無効にする
	ChangeScene(const ChangeScene& obj) = delete;
	//代入演算子を無効にする
	ChangeScene& operator=(const ChangeScene& obj);
};

