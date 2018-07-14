#include "stdafx.h"
#include "ConcreteSubject.h"
int & ConcreteSubject::GetState()
{
	return *subjectState;
}

void ConcreteSubject::SetState(int in)
{
	*subjectState = in;
}


