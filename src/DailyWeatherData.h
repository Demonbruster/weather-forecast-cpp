#pragma once

#include <string>

class DailyWeatherData {
public:
    std::string date;
    std::string sunrise;
    std::string sunset;
    double rainSum;

    void display() const;
};
