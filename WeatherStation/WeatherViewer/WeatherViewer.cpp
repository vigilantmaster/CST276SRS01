// WeatherViewer.cpp : Defines the entry point for the console application.
//
/////////////////////////////////
#include "stdafx.h"
#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include "station.h"
#include "current.h"


int main()
{
	WeatherStation::Station weatherStation;
	const WeatherViewer::Current currentWeather(weatherStation);
	
	
	
	std::random_device rd;
	std::mt19937 mt{ rd() };
	std::uniform_int_distribution<int> const dist{ 0, 10000 };

	for (int i{ 0 }; i != 10; ++i)
	{
		auto const sporadic{ dist(mt) };
		std::this_thread::sleep_for(std::chrono::milliseconds(sporadic));
		weatherStation.measure();
		std::cout << " TEMP  |  Humidity  |  Pressure \n" << currentWeather << std::endl;
	}	
	
	return 0;
}

