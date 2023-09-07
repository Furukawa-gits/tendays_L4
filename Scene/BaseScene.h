#pragma once
#include "SceneManager.h"
#include "Scene.h"
#include "SceneChangeAnimation.h"
#include "../Input/KeyInput.h"

class BaseScene
{
protected: //�ÓI�����o�ϐ�
	static SceneChangeAnimation changeAnimation;

public: //�ÓI�����o�֐�
	static void ChangeAnimationUpdate() { changeAnimation.Update(); }
	static void ChangeAnimationDraw() { changeAnimation.Draw(); }

protected: //�����o�ϐ�
	SceneManager* sceneMgr;

	bool isSceneDest; //�V�[����j�����邩�ǂ���
	Scene nextScene;  //���̃V�[���̑J�ڐ�

public: //�����o�֐�
	BaseScene() = delete;
	BaseScene(SceneManager* sceneMgr);
	virtual ~BaseScene();

	virtual void Init() = 0;
	virtual int Update(const KeyInput& input) = 0;
	virtual void Draw() = 0;
};
