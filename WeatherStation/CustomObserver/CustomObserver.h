
#pragma once
#include "ICustomObserver.h"
#include "station.h"

namespace WeatherStation {
	class Station;
}

class CustomObserver : ICustomObserver
{
public:
	CustomObserver(WeatherStation::Station weather_station);
	void Update() override;
public:
	virtual ~CustomObserver() = default;

private:
	WeatherStation::Station mWeatherStation;
};

