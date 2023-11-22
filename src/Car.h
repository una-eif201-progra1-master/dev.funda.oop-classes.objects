//
// Created by Maikol Guzman on 21/11/23.
//

#include <iostream>
#include <string>
using namespace std;

/*
 *
 */
class Car {
public:
    string color{};
    string model{};

    void start() const {
        cout << model << " is starting" << endl;
    }
};
