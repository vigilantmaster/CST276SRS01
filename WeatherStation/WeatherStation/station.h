#ifndef WEATHER_STATION_STATION_H
#define WEATHER_STATION_STATION_H

#include <vector>
#include <chrono>
#include "temperature.h"
#include "humidity.h"
#include "pressure.h"
#include "record.h"
#include "Observer.h"
#include <list>
#include "Subject.h"
#include "StationExports.h"
namespace WeatherStation
{
    class WEATHERSTATION_API Station : public Subject
    {
    public:
	    virtual ~Station() = default;
    private:
        std::vector<std::reference_wrapper<WeatherStation::Record>> history_{};
    public:
	   static WeatherStation::Station weather_station;
	public:		
        Temperature getTemperature() const;
        Humidity getHumidity() const;
        Pressure getPressure() const;
		static Station & getWeatherStation();
        Temperature getMeanTemperature(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;
        Humidity getMeanHumidity(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;
        Pressure getMeanPressure(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;		
        void measure();	
    };
}
#endif // WEATHER_STATION_STATION_H
