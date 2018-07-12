#ifndef WEATHER_VIEWER_CURRENT_H
#define WEATHER_VIEWER_CURRENT_H

#include <ostream>
#include "Observer.h"


namespace WeatherViewer
{
    class Current : public Observer
    {
        friend std::ostream& operator<<(std::ostream& os, Current const& current);

    private:
        WeatherStation::Station const& station_; 
		int*  temperature;
		int* 	humidity;
		double*	pressure;

    public:
        explicit Current(WeatherStation::Station const& station);

        WeatherStation::Station const& getStation() const;
	    void Update() override;
    };
}

#endif // WEATHER_VIEWER_CURRENT_H
