#pragma once
#include "Subject.h"
class ConcreteSubject : public Subject
{
public:
	int& GetState();
	void SetState(int in);

private:
	int* subjectState;
};