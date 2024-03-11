#include "Location.h"
#include <iostream>

Location::Location(int id, const std::string& name, double latitude, double longitude)
    : id(id), name(name), latitude(latitude), longitude(longitude), isFavorite(false) {}

void Location::display() const {
    std::cout << "ID: " << id << "\tName: " << name << "\tLatitude: " << latitude
              << "\tLongitude: " << longitude << "\tFavorite: " << (isFavorite ? "Yes" : "No") << std::endl;
}
