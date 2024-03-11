// WeatherDataAnalyzer.h
#pragma once

#include <vector>
#include <string>
#include <algorithm>
#include "Location.h"
#include "HourlyWeatherData.h"
#include "DailyWeatherData.h"

class WeatherDataAnalyzer {
private:
    std::vector<Location> locations;
    std::vector<std::vector<HourlyWeatherData> > hourlyData; // Store hourly data for each location
    std::vector<std::vector<DailyWeatherData> > dailyData;   // Store daily data for each location

    int selectedLocationId; // Store the currently selected location ID
    int autoFetchInterval;  // Store the auto-fetch interval in minutes

public:
    WeatherDataAnalyzer();
    ~WeatherDataAnalyzer();

    void addLocation(int id, const std::string& name, double latitude, double longitude);
    void addHourlyData(int locationId, const HourlyWeatherData& data);
    void addDailyData(int locationId, const DailyWeatherData& data);
    void displayForecast();
    void displayHistorical();
    void seedData();
    void setFavoriteLocation(int locationId, bool isFavorite);
    void searchLocation(const std::string& keyword);
    void setAutoFetchInterval(int interval);
    void startAutoFetch();

private:
    void fetchWeatherData(); // Simulate fetching data from Open-Meteo API
    void seedData2();
};
