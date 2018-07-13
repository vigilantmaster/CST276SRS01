#ifndef WEATHER_STATION_RECORD_H
#define WEATHER_STATION_RECORD_H
#ifdef WEATHERSTATION_EXPORTS
#define WEATHERSTATION_EXPORTS __declspec(dllexport)
#else
#define WEATHERSTATION_EXPORTS __declspec(dllimport)
#endif
#include <chrono>
#include "temperature.h"
#include "humidity.h"
#include "pressure.h"

namespace WeatherStation
{
    class WEATHERSTATION_EXPORTS Record
    {
    private:
        std::chrono::system_clock::time_point const timepoint_{ std::chrono::system_clock::now() };
        Temperature const temperature_;
        Humidity const humidity_;
        Pressure const pressure_;

    public:
        Record(Temperature const temperature, Humidity const humidity, Pressure const pressure);

        std::chrono::system_clock::time_point getTimepoint() const;
        Temperature getTemperature() const;
        Humidity getHumidity() const;
        Pressure getPressure() const;
    };
}

#endif // WEATHER_STATION_RECORD_H
