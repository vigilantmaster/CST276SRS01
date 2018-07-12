// WeatherViewer.cpp : Defines the entry point for the console application.
//
/////////////////////////////////
#include "stdafx.h"
#include <iostream>
#include <random>
#include <chrono>
#include <thread>
#include "station.h"


int main()
{
	WeatherStation::Station weather_station;
	
	
	
	std::random_device rd;
	std::mt19937 mt{ rd() };
	std::uniform_int_distribution<int> const dist{ 0, 10000 };

	for (int i{ 0 }; i != 10; ++i)
	{
		auto const sporadic{ dist(mt) };
		std::this_thread::sleep_for(std::chrono::milliseconds(sporadic));
		weather_station.measure();
	}	

	return 0;
}

