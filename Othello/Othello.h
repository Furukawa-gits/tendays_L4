﻿#pragma once
#include <vector>
#include <string>

enum Color
{
	EMPTY,
	BLACK,
	WHITE,
	HOLE,
	NONE = -1
};

class Othello
{
public:
	static const int circleSize = 90;

private: //メンバ変数
	std::vector<Color> cell;
	std::vector<Color> initCell;
	int width;  //幅
	int height; //高さ

public: //メンバ関数
	Othello();
	~Othello() {}

	// 初期化
	void Init();
	// 描画
	void Draw(int offsetX = 0, int offsetY = 0);
	// リセット
	void Reset();

	// 石を置く
	int Put(int x, int y, Color color);
	// ステージ読み込み
	int Load(const std::string& filePath);

	int GetWidth() { return width; }
	int GetHeight() { return height; }
	size_t GetSize() { return cell.size(); }
	Color GetCell(const size_t& index);
};