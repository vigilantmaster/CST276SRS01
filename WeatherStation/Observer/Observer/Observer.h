#pragma once

#include "ObserverExports.h"

class OBSERVER_API Observer
{

public:
	virtual void Update() = 0;
};