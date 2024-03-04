#include <iostream>  // Include the input/output stream library
#include <string>    // Include the string library
using namespace std; // Use the standard namespace

class Person { // Declaration of the Person class
private: // Private access specifier - members below this are only accessible within the class
    string name; // Private member variable representing the name of the person
    int age;     // Private member variable representing the age of the person
    double height; // Private member variable representing the height of the person
    bool married;  // Private member variable representing the marital status of the person
    char gender;   // Private member variable representing the gender of the person

public: // Public access specifier - members below this are accessible outside the class
    // Getter and setter methods for 'name'
    string getName() { // Definition of the getter method for 'name'
        return name;   // Return the value of the 'name' member variable
    }

    void setName(string name) { // Definition of the setter method for 'name'
        this->name = name;       // Set the value of the 'name' member variable to the provided parameter
    }

    // Getter and setter methods for 'age'
    int getAge() { // Definition of the getter method for 'age'
        return age; // Return the value of the 'age' member variable
    }

    void setAge(int age) { // Definition of the setter method for 'age'
        this->age = age;    // Set the value of the 'age' member variable to the provided parameter
    }

    // Getter and setter methods for 'height'
    double getHeight() { // Definition of the getter method for 'height'
        return height;    // Return the value of the 'height' member variable
    }

    void setHeight(double height) { // Definition of the setter method for 'height'
        this->height = height;       // Set the value of the 'height' member variable to the provided parameter
    }

    // Getter and setter methods for 'married' (formerly isMarried)
    bool getIsMarried() { // Definition of the getter method for 'married'
        return married;    // Return the value of the 'married' member variable
    }

    void setMarried(bool married) { // Definition of the setter method for 'married'
        this->married = married;     // Set the value of the 'married' member variable to the provided parameter
    }

    // Getter and setter methods for 'gender'
    char getGender() { // Definition of the getter method for 'gender'
        return gender; // Return the value of the 'gender' member variable
    }

    void setGender(char gender) { // Definition of the setter method for 'gender'
        this->gender = gender;     // Set the value of the 'gender' member variable to the provided parameter
    }
};

int main() { // Entry point of the program
    Person person; // Create an instance of the Person class named 'person'

    // Set values for the member variables using setter methods
    person.setName("John");
    person.setAge(30);
    person.setHeight(6.2);
    person.setMarried(false);
    person.setGender('M');

    // Output the values of the member variables using getter methods
    cout << "Name: " << person.getName() << endl;        // Output the name
    cout << "Age: " << person.getAge() << endl;          // Output the age
    cout << "Height: " << person.getHeight() << endl;    // Output the height
    cout << "Married: " << (person.getIsMarried() ? "Yes" : "No") << endl; // Output the marital status
    cout << "Gender: " << person.getGender() << endl;    // Output the gender

    return 0; // Indicate successful program termination
}
