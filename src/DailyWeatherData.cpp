#include "DailyWeatherData.h"
#include <iostream>

void DailyWeatherData::display() const {
    std::cout << "Date: " << date << "\tSunrise: " << sunrise
              << "\tSunset: " << sunset << "\tRain Sum: " << rainSum << std::endl;
}
