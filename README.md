# Classes and Objects

```c++
// Example of Class and Object
class Car {
  public:
    string color;
    string model;

    void start() {
        cout << model << " is starting" << endl;
    }
};

int main() {
    Car car1;
    car1.color = "Red";
    car1.model = "Toyota";

    car1.start();  // Output: Toyota is starting
    return 0;
}

```

In this example, `Car` is a class with attributes `color` and `model`, and a method `start()`. `car1` is an object of the class `Car`.
