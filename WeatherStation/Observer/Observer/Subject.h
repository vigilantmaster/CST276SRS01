#pragma once
#include "Observer.h"
#include <vector>

class OBSERVER_API Subject
{
public:
	void Attach(Observer* in);
	void Detach(Observer* in);
	void Notify();

protected:
	std::vector<Observer*> myObserver;
};
