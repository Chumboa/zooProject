#ifndef DATE_H
#define DATE_H
#include <string>
class Date {
private:
    int d;
    int m;
    int y;
public:
    Date(int d = 1, int m = 1, int y = 1900);
    std::string toString() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    bool setValues(int d, int m, int y);
};

#endif