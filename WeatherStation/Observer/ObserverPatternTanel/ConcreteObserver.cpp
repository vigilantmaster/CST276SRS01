#include "stdafx.h"
#include "ConcreteObserver.h"

ConcreteObserver::ConcreteObserver(ConcreteSubject * incommingSubject)
{
	mySubject = incommingSubject;
	mySubject->Attach(this);
}

void ConcreteObserver::Update()
{
	observerState = &mySubject->GetState();
}
