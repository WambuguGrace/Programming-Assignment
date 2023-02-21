
#include <iostream>
#include <string>

using namespace std;

class Person {
    public:

        Person(int age, string firstname, string lastname) {
            this->age = age;
            this->firstname = firstname;
            this->lastname = lastname;
        }

        void getValues() {
            cout << "Age: " << age << endl;
            cout << "First name: " << firstname << endl;
            cout << "Last name: " << lastname << endl;
        }

        void setValues(int age, string firstname, string lastname) {
            this->age = age;
            this->firstname = firstname;
            this->lastname = lastname;
        }

    private:
        int age;
        string firstname;
        string lastname;
};

int main() {

    Person my_person(23, "Wambugu", "Jay");

    my_person.getValues();

    my_person.setValues(45, "Mercy", "Smith");

    my_person.getValues();

    return 0;
}
