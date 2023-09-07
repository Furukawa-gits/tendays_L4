#pragma once
#include "Scene.h"
#include "../Input/KeyInput.h"
#include <memory>
#include <stack>

class BaseScene;
class SceneManager
{
public: // �����o�֐�
	SceneManager();
	~SceneManager() {}

	void Loop(const KeyInput& input) const;
	void SceneChange(Scene scene, bool stackClear);
	int PopScene();

private: // �����o�ϐ�
	std::stack<std::shared_ptr<BaseScene>> sceneStack;
};
