#include <time.h>
#include <stdlib.h>
#include "Food.h"
#include "Game.h"

CFood::CFood(int x, int y, char pic):CUnit(x, y, pic)
{
	srand((unsigned int)time(NULL));

	this->m_iX = rand() % 50;
	this->m_iY = rand() % 50;
	this->m_cPic = pic;
}
//随机生成食物
CFood::~CFood()
{
}

void CFood::createPos(vector<CUnit> *vec)
{
	while (true)
	{
		int x = CGame::KLEFT + 1 + rand() % (CGame::KWIDTH - 2);
		int y = CGame::KUP + 3 + rand() % (CGame::KHEIGHT - 2);
		size_t i = 0;
		for (i = 0; i < vec->size(); i++)
		{
			if (x == vec->at(i).m_iX && y == vec->at(i).m_iY)
			{
				//生成的位置在蛇身上时换一个随机点
				break;
			}
		}

		if (i == vec->size())
		{
			m_iX = x;
			m_iY = y;
			return;
		}		
	}
}