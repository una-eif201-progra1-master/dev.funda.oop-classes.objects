# Classes and Objects

https://mikeguzman.dev/software-development/programming-fundations/object-oriented-programming/

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

In this example, `Car` is a class with attributes `color, model, and method `start()`. `car1` is an object of the class `Car`.
