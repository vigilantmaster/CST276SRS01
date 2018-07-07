#ifndef WEATHER_STATION_STATION_H
#define WEATHER_STATION_STATION_H

#include <vector>
#include <chrono>
#include "temperature.h"
#include "humidity.h"
#include "pressure.h"
#include "record.h"
#include "IStation.h"
#include "CustomObserver.h"
#include <list>


namespace WeatherViewer {
	class Statistics;
	class Current;
}

namespace WeatherStation
{
    class Station : IStation 
    {
    public:
	    virtual ~Station() = default;
    private:
        std::vector<WeatherStation::Record> history_{};
	private:
		std::list< class CustomObserver> observerList; //"Severity	Code	Description	Project	File	Line	Suppression State		Error	C2923	'std::list': 'CustomObserver' is not a valid template type argument for parameter '_Ty'	CustomObserver	i : \documents\github\cst276srs01\weatherstation\weatherstation\station.h	29

		std::list<class CustomObserver> observers;
		
	public:
		std::ostream& getCurrent(std::ostream& os, WeatherViewer::Current const& current);
		std::ostream& getAverage(std::ostream& os, WeatherViewer::Statistics const& statistics);
        Temperature getTemperature() const;
        Humidity getHumidity() const;
        Pressure getPressure() const;

        Temperature getMeanTemperature(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;
        Humidity getMeanHumidity(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;
        Pressure getMeanPressure(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;

		void Update() override;
        void measure();
		void registerObserver(CustomObserver inObserver);
		void unRegisterObserver(int Observer);
		void unRegisterObservers();
		void unRegisterLastObserver();
    };
}

#endif // WEATHER_STATION_STATION_H
