#pragma once
#include "Observer.h"

class Subject
{
public:
	void Attach(Observer* in);
	void Detach(Observer* in);
	void Notify();

protected:
	Observer * myObserver;
};