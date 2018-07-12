#ifndef WEATHER_VIEWER_STATISTICS_H
#define WEATHER_VIEWER_STATISTICS_H

#include <ostream>
#include <chrono>

namespace WeatherStation
{
    class Station;
}

namespace WeatherViewer
{
    class Statistics : public Observer

    {
        friend std::ostream& operator<<(std::ostream& os, Statistics const& statistics);

    private:
        WeatherStation::Station const& station_;
        std::chrono::system_clock::time_point const begin_{ std::chrono::system_clock::now() };
		WeatherStation::Temperature  meanTemperature;
		WeatherStation::Humidity*  meanHumidity;
		WeatherStation::Pressure  meanPressure;
		int* meanTemp;
		int* meanHumid;
		double* meanPress;
    public:
        explicit Statistics(WeatherStation::Station const& station);

        WeatherStation::Station const& getStation() const;
        std::chrono::system_clock::time_point getBegin() const;
	    void Update() override;
    };
}

#endif // WEATHER_VIEWER_STATISTICS_H
