#include "stdafx.h"
#include "temperature.h"
#include <limits>
#include <random>
#include <ctime>

namespace WeatherStation
{
    Temperature::Temperature(value_type const value):
        value_{ value }
    {
		srand(time(NULL));
    }

    Temperature::value_type Temperature::get() const
    {
		
        return value_;
    }

	int Temperature::GenerateTemp()
    {		
		auto const value = rand() % 5 + 35;
		return value;
    }

    bool Temperature::is_good() const
    {
        auto const result{ value_ >= absolute_zero && value_< std::numeric_limits<value_type>::max() };
        return result;
    }
}
