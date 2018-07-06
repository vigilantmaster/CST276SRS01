// CustomObserver.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "CustomObserver.h"
#include <iostream>
#include "station.h"
#include "current.h"
#include "statistics.h"

CustomObserver::CustomObserver(WeatherStation::Station weather_station)
{
	mWeatherStation = weather_station;
}

void CustomObserver::Update()
{	
	WeatherViewer::Current mCurrent(mWeatherStation);
	WeatherViewer::Statistics mStatistics(mWeatherStation);
	std::cout <<
		"Average: " << mWeatherStation.getAverage(std::cout , mStatistics) << "\n" <<
		"Current: " << mWeatherStation.getCurrent( std::cout , mCurrent) << "\n" <<
		std::endl;
}


