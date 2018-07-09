#pragma once
#include "Observer.h"
#include "ConcreteSubject.h"
class ConcreteObserver : Observer
{
public:
	ConcreteObserver(ConcreteSubject* incommingSubject);
	void Update();
private:
	ConcreteSubject * mySubject;
	int* observerState;
};