#include "HourlyWeatherData.h"
#include <iostream>

void HourlyWeatherData::display() const {
    std::cout << "Timestamp: " << timestamp << "\tTemperature: " << temperature
              << "\tPrecipitation: " << precipitation << "\tPressure: " << pressure
              << "\tWind Speed: " << windSpeed << "\tHumidity: " << humidity
              << "\tCloudiness: " << cloudiness << std::endl;
}
