#pragma once
namespace WeatherStation {
	class Station;
}

class ICustomObserver
{
protected:
	~ICustomObserver() = default;
public:
	virtual void Update() = 0;

	
};
