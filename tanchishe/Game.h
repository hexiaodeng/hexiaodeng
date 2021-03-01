#pragma once

#include "Food.h"
#include "Snake.h"

class CGame
{
public:
	CGame();
	virtual ~CGame();

	void run();
	bool checkFailed();
	bool checkLevel();
	void changeInfo(); 
	void drawGameArea();
	void drawGameInfo();

public:
	static const int KLEFT;
	static const int KUP;
	static const int KWIDTH;
	static const int KHEIGHT;
	static const int KSCORE_OFFSET;
	static const int KLEVEL_OFFSET;

public:
	CFood *m_pFood;
	CSnake *m_pSnake;
	int m_iScore;
	int m_iLevel;
};

