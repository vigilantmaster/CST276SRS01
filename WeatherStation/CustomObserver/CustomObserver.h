#pragma once
#include "ICustomObserver.h"
#include "station.h"

namespace WeatherStation {
	class CustomObserver : ICustomObserver
	{
	public:
		CustomObserver(Station * weather_station);
		void Update() override;
	public:
		virtual ~CustomObserver() = default;

	private:
		Station* mWeatherStation;
	};

}