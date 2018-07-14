#include "stdafx.h"
#include "Subject.h"
void Subject::Attach(Observer * in)
{
	myObserver.push_back(in);
}

void Subject::Detach(Observer * in)
{
	for (auto & i :myObserver)
	{
		if(i==in)
		{
			i=nullptr;
		}
	}
}

void Subject::Notify()
{
	for (auto & i : myObserver)
	{
		if (i != nullptr)
		{
			i->Update();
		}
	}
}
