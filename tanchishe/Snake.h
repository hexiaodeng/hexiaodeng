#pragma once
#include <vector>
#include "Unit.h"
#include "Food.h"
using namespace std;

typedef enum {
	UP,DOWN,LEFT,RIGHT
}Directions;

class CSnake
{
public:
	CSnake(int x = 40, int y = 10, int length = 4, Directions direction = RIGHT, int speed = 500, char pic = '*');
	virtual ~CSnake();

	void changeDirection(int vkValue);//WSAD
	void move();
	bool eatFood(CFood *pFood);
	void showSnake();
	void eraseSnake();
	void growup();

public:
	int m_iLength;
	int m_iHeadX;
	int m_iHeadY;
	int m_iSpeed;
	int m_cPic;
	Directions m_enumCurrentDirection;
	vector<CUnit> m_vecBody;
};

