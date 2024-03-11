// WeatherDataAnalyzer.cpp
#include "WeatherDataAnalyzer.h"
#include <iostream>
#include <thread>
#include <chrono>

WeatherDataAnalyzer::WeatherDataAnalyzer() : selectedLocationId(-1), autoFetchInterval(0) {}

WeatherDataAnalyzer::~WeatherDataAnalyzer() {
    // Add cleanup code if needed
}

void WeatherDataAnalyzer::setFavoriteLocation(int locationId, bool isFavorite) {
    auto it = std::find_if(locations.begin(), locations.end(), [locationId](const Location& loc) {
        return loc.id == locationId;
    });

    if (it != locations.end()) {
        it->isFavorite = isFavorite;
        std::cout << "Location set as favorite." << std::endl;
    } else {
        std::cout << "Location not found." << std::endl;
    }
}

void WeatherDataAnalyzer::searchLocation(const std::string& keyword) {
    std::cout << "Search Results:" << std::endl;
    for (const auto& loc : locations) {
        if (loc.name.find(keyword) != std::string::npos) {
            loc.display();
        }
    }
}

void WeatherDataAnalyzer::setAutoFetchInterval(int interval) {
    autoFetchInterval = interval;
    std::cout << "Auto-fetch interval set to " << interval << " minutes." << std::endl;
}

void WeatherDataAnalyzer::startAutoFetch() {
    if (autoFetchInterval > 0) {
        while (true) {
            fetchWeatherData(); // Simulate fetching data from Open-Meteo API
            std::this_thread::sleep_for(std::chrono::minutes(autoFetchInterval));
        }
    }
}

void WeatherDataAnalyzer::fetchWeatherData() {
    // Simulate fetching data from Open-Meteo API and updating hourlyData and dailyData
    // Call seedData2 for additional seeding
    seedData2();
}

// Add other functions as needed...


void WeatherDataAnalyzer::seedData() {
      // Simulate fetching hourly data from Open-Meteo API and populating sample data for City1
    addLocation(1, "City1", 40.7128, -74.0060);

    HourlyWeatherData hourlyData1;
    hourlyData1.timestamp = "2024-03-15T12:00:00";
    hourlyData1.temperature = 25.5;
    hourlyData1.precipitation = 0.1;
    hourlyData1.pressure = 1015.0;
    hourlyData1.windSpeed = 15.0;
    hourlyData1.humidity = 70.0;
    hourlyData1.cloudiness = 50.0;
    // Set other hourly variables...
    addHourlyData(1, hourlyData1);

    DailyWeatherData dailyData1;
    dailyData1.date = "2024-03-15";
    dailyData1.sunrise = "06:30";
    dailyData1.sunset = "18:45";
    dailyData1.rainSum = 5.0;
    // Set other daily variables...
    addDailyData(1, dailyData1);

    // Simulate fetching hourly data from Open-Meteo API and populating sample data for City2
    addLocation(2, "City2", 34.0522, -118.2437);

    HourlyWeatherData hourlyData2;
    hourlyData2.timestamp = "2024-03-15T12:00:00";
    hourlyData2.temperature = 22.0;
    hourlyData2.precipitation = 0.2;
    hourlyData2.pressure = 1018.0;
    hourlyData2.windSpeed = 12.0;
    hourlyData2.humidity = 65.0;
    hourlyData2.cloudiness = 40.0;
    // Set other hourly variables...
    addHourlyData(2, hourlyData2);

    DailyWeatherData dailyData2;
    dailyData2.date = "2024-03-15";
    dailyData2.sunrise = "06:45";
    dailyData2.sunset = "18:30";
    dailyData2.rainSum = 7.0;
    // Set other daily variables...
    addDailyData(2, dailyData2);
    // Add more sample data for other locations if needed...

    std::cout << "Data seeded successfully." << std::endl;
}

void WeatherDataAnalyzer::seedData2() {
    // Simulate fetching hourly data from Open-Meteo API and populating sample data for City3, City4, and City5
    addLocation(3, "City3", 35.6895, 139.6917);
    HourlyWeatherData hourlyData3;
    // Set hourly data for City3...
    addHourlyData(3, hourlyData3);

    addLocation(4, "City4", 41.8781, -87.6298);
    HourlyWeatherData hourlyData4;
    // Set hourly data for City4...
    addHourlyData(4, hourlyData4);

    addLocation(5, "City5", 51.5074, -0.1278);
    HourlyWeatherData hourlyData5;
    // Set hourly data for City5...
    addHourlyData(5, hourlyData5);

    std::cout << "Additional data seeded successfully." << std::endl;
}

