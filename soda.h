#ifndef SODA_H
#define SODA_H

#include <string>

// Soda class declaration. See .cpp file with same name for definition / implementation.
class Soda
{
public:
    Soda() = delete;

    // Declare public visible constructor with three parameters.
    Soda(const std::string& name, unsigned int price, unsigned int inventory);

    // Declare public variables.
    const std::string name_;
    const unsigned int price_;
    const unsigned int inventory_;
};

#endif // SODA_H
