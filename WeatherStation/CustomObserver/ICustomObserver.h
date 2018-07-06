#pragma once
class ICustomObserver
{
protected:
	~ICustomObserver() = default;
public:
	virtual void Update() = 0;
private:
	
};