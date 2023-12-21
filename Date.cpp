#include "Date.h"

#include <sstream>


Date::Date(int d, int m, int y) {
    if (!setValues(d, m, y)) {
        this->d = 1;
        this->m = 1;
        this->y = 1900;
    }
}

std::string Date::toString() const {
    std::ostringstream oss;
    oss << d << '/' << m << '/' << y;
    return oss.str();
}

int Date::getDay() const {
    return d;
}

int Date::getMonth() const {
    return m;
}

int Date::getYear() const {
    return y;
}

bool Date::setValues(int d, int m, int y) {
    if (m < 1 || m > 12) {
        return false;
    }

    int maxDays = 31;
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        maxDays = 30;
    }
    else if (m == 2) {
        maxDays = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) ? 29 : 28;
    }

    if (d < 1 || d > maxDays) {
        return false;
    }

    if (y < 1900 || y > 2030) {
        return false;
    }

    this->d = d;
    this->m = m;
    this->y = y;
    return true;
}