#pragma once
#include "IAction.h"

#include "DVLVect3.h"

class Move : public IAction
{
	DVLVect3 m_start;
	DVLVect3 m_direction;
	DVLVect3 m_end;

	Move(DVLVect3 mv_start, DVLVect3 mv_direction):
		m_start(mv_start)
		, m_direction(mv_direction)
		, m_end(mv_start + mv_direction)
		, IAction(std::bind(&Move::actionMove, this))
	{
	}

	void	actionMove()
	{

	}
};

