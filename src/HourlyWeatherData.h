#pragma once

#include <string>

class HourlyWeatherData {
public:
    std::string timestamp;
    double temperature;
    double precipitation;
    double pressure;
    double windSpeed;
    double humidity;
    double cloudiness;

    void display() const;
};
