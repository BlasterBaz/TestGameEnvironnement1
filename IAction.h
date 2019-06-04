#pragma once
#include <functional>

class IAction
{
	std::function<void()> m_fToExecute;
public:
	IAction(std::function<void()> mv_fToExecute)
		:m_fToExecute(mv_fToExecute)
	{
	}

	void execute()
	{
		m_fToExecute();
	}
};

