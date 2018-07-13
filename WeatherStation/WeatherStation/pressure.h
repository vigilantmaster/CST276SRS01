#ifndef WEATHER_STATION_PRESSURE_H
#define WEATHER_STATION_PRESSURE_H
#ifdef WEATHERSTATION_EXPORTS
#define WEATHERSTATION_EXPORTS __declspec(dllexport)
#else
#define WEATHERSTATION_EXPORTS __declspec(dllimport)
#endif
#include <limits>
namespace WeatherStation
{
    class WEATHERSTATION_EXPORTS Pressure
    {
    public:
        using value_type = double; // inches Hg (29.9213 in Hg == 1 atmosphere)

        static auto constexpr default_value{ std::numeric_limits<value_type>::quiet_NaN() };

    private:
        value_type value_{ default_value };

    public:
        explicit Pressure(value_type const value);

        value_type get() const;

        bool is_good() const;

		static double GeneratePressure();
    };
}

#endif // WEATHER_STATION_PRESSURE_H
