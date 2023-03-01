#include <iostream>
#include <string>

using namespace std;

class ethernet {
    public:
        ethernet(string location) : location(location) {}

        void connect() {
            cout << "Ethernet connected" << endl;
        }

    private:
        string location;
};

class laptop : public ethernet {
    public:
        laptop(string location, int input) : ethernet(location), input(input) {}

        void connect() {
            cout << "We have a connection to the laptop" << endl;
        }

    private:
        int input;
};

class Server : public ethernet {
    public:
        Server(string location, string properties) : ethernet(location), properties(properties) {}

        void connect() {
            cout << "Server is good" << endl;
        }

    private:
        string properties;
};

int main() {
    laptop room1("134.32.1.176", 112);
    Server building1("134.32.1.1", "properties.com" );

    room1.connect();
    building1.connect();

    return 0;
}
