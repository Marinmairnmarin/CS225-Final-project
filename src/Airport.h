#include <string>

class Airport {
    public:
        int id_;
        std::string name_;
        std::string city_;
        std::string latitude_;
        std::string longitude_;

        Airport(int id, std::string name, std::string city, std::string latitude, std::string longitude);
        Airport(Airport & other);
        Airport operator=(const Airport & other);
};
