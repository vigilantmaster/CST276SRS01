#pragma once



	class IObserver
	{
	protected:
		~IObserver() = default;
	public:
		virtual void Update(WeatherStation::Station * weather_station) = 0;
	};
