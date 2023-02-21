
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

class Student : public Person {
    public:
        Student(int age, string firstname, string lastname, string institution, int year, string registration_number)
            : Person(age, firstname, lastname) {
            this->institution = institution;
            this->year = year;
            this->registration_number = registration_number;
        }

        void getValues() {
            Person::getValues();
            cout << "Institution: " << institution << endl;
            cout << "Year of study: " << year << endl;
            cout << "Registration number: " << registration_number << endl;
        }

        void setValues(int age, string firstname, string lastname, string institution, int year, string registration_number) {
            Person::setValues(age, firstname, lastname);
            this->institution = institution;
            this->year = year;
            this->registration_number = registration_number;
        }

    private:
        string institution;
        int year;
        string registration_number;
};

int main() {
    Student my_student(23, "Mercy", "Smith", "University of Nairobi", 3, "789543");

    my_student.getValues();

    return 0;
}
