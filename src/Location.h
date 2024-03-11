#pragma once

#include <string>

class Location {
public:
    int id;
    std::string name;
    double latitude;
    double longitude;
    bool isFavorite;

    Location(int id, const std::string& name, double latitude, double longitude);

    void display() const;
};
