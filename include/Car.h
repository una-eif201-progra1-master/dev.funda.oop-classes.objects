//
// Created by Maikol Guzman on 21/11/23.
//

#include <iostream>
#include <string>
using namespace std;


/*!
 * \class Car
 * \brief The class Car is the base class
 * \file Car.h
 * \brief The file Car.h is the header file of the class Car
 */
class Car {
public:
    string color{};
    string model{};

    void start() const {
        cout << model << " is starting" << endl;
    }
};
