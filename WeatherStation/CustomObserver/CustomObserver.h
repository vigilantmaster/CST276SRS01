
#pragma once
#include "ICustomObserver.h"

class CustomObserver : ICustomObserver
{
public:
	CustomObserver();
	 void Update() override;
protected:
	~CustomObserver();

private:

};

inline CustomObserver::CustomObserver()
{

}

inline void CustomObserver::Update()
{
}

inline CustomObserver::~CustomObserver()
{
}