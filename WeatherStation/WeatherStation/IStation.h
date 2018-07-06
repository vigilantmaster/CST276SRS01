#pragma once
#include <list>
#include "CustomObserver.h"


class IStation
{
protected:
	~IStation() = default;
public:
	virtual void Update();


};

