// main.cpp
#include "../src/WeatherDataAnalyzer.h"
#include <thread>
#include <chrono>

int main() {
    WeatherDataAnalyzer weatherAnalyzer;

    // Seed data using Open-Meteo API
    weatherAnalyzer.seedData();

    // Example usage
    weatherAnalyzer.setFavoriteLocation(1, true);
    weatherAnalyzer.searchLocation("City");

    // Set auto-fetch interval and start auto-fetch in a separate thread
    // weatherAnalyzer.setAutoFetchInterval(30); // Auto-fetch every 30 minutes
    // std::thread autoFetchThread(&WeatherDataAnalyzer::startAutoFetch, &weatherAnalyzer);

    // Display forecast and historical data
    weatherAnalyzer.displayForecast();
    weatherAnalyzer.displayHistorical();

    // Join the auto-fetch thread (optional, depending on your application's design)
    // autoFetchThread.join();

    return 0;
}
