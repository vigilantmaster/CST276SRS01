#include "stdafx.h"
#include "humidity.h"
#include <limits>
#include <random>
#include <ctime>

namespace WeatherStation
{
    Humidity::Humidity(value_type const value) :
        value_{ value }
    {
		srand(time(nullptr));
    }

    Humidity::value_type Humidity::get() const
    {
        return value_;
    }

    bool Humidity::is_good() const
    {
        auto const result{ value_ >= 0 && value_<= 100 };
        return result;
    }
	int Humidity::GenerateHumidity()
	{
		auto const value = rand() % 5 + 100;
		return value;
	}
}
