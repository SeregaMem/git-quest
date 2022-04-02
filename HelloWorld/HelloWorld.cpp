
#include <iostream>
#include <fstream>

using namespace std;


int main() {
    ofstream out("output.txt");
    if (out.is_open()) {
        out << "Hello World";
    }
    cout << "Hello World!\n"
        << "Hello Git";
    return 0;
}


