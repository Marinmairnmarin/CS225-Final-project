#include "Airport.h"

// Constructor
Airport::Airport(int id, std::string name, std::string city, std::string latitude, std::string longitude) {
    id_ = id;
    name_ = name;
    city_ = city;
    latitude_ = latitude;
    longitude_ = longitude;
}

Airport::Airport(Airport &other) {
    id_ = other.id_;
    name_ = other.name_;
    city_ = other.city_;
    latitude_ = other.latitude_;
    longitude_ = other.longitude_;
}

Airport Airport::operator=(const Airport & other) {

}
