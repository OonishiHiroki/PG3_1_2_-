#pragma once
class ChangeScene final{
private:
	//�R���X�g���N�^��private�ɂ���
	ChangeScene();
	//�f�X�g���N�^��private�ɂ���
	~ChangeScene();
public:
	//�R�s�[�R���X�g���N�^�𖳌��ɂ���
	ChangeScene(const ChangeScene& obj) = delete;
	//������Z�q�𖳌��ɂ���
	ChangeScene& operator=(const ChangeScene& obj);
};

