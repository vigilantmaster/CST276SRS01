#include "stdafx.h"
#include "Subject.h"
void Subject::Attach(Observer * in)
{
	myObserver = in;
}

void Subject::Detach(Observer * in)
{
	myObserver = nullptr;
}

void Subject::Notify()
{
	myObserver->Update();
}
