#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    double height;
    bool married; // Renamed from isMarried to married
    char gender;

public:
    // Getter and setter methods for 'name'
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    // Getter and setter methods for 'age'
    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    // Getter and setter methods for 'height'
    double getHeight() {
        return height;
    }

    void setHeight(double height) {
        this->height = height;
    }

    // Getter and setter methods for 'married' (formerly isMarried)
    bool getIsMarried() {
        return married;
    }

    void setMarried(bool married) {
        this->married = married;
    }

    // Getter and setter methods for 'gender'
    char getGender() {
        return gender;
    }

    void setGender(char gender) {
        this->gender = gender;
    }
};

int main() {
    Person person;
    person.setName("John");
    person.setAge(30);
    person.setHeight(6.2);
    person.setMarried(false);
    person.setGender('M');

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Height: " << person.getHeight() << endl;
    cout << "Married: " << (person.getIsMarried() ? "Yes" : "No") << endl;
    cout << "Gender: " << person.getGender() << endl;

    return 0;
}
