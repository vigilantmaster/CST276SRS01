#ifndef WEATHER_STATION_HUMIDITY_H
#define WEATHER_STATION_HUMIDITY_H
#ifdef WEATHERSTATION_EXPORTS
#define WEATHERSTATION_EXPORTS __declspec(dllexport)
#else
#define WEATHERSTATION_EXPORTS __declspec(dllimport)
#endif
namespace WeatherStation
{
    class WEATHERSTATION_EXPORTS Humidity
    {
    public:
        using value_type = int; // percent [0, 100]

        static auto constexpr default_value{ -1 };

    private:
        value_type const value_{ default_value };

    public:
        explicit Humidity(value_type const value);

        value_type get() const;

        bool is_good() const;

		static int GenerateHumidity();
    };
}

#endif // WEATHER_STATION_HUMIDITY_H
