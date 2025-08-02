#include<iostream>
using namespace std;

class Print {
public:
    void show() {
        cout << "No argument\n";
    }

    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(string s, int y) {
        cout << "String and int: " << s << ", " << y << endl;
    }
};

int main() {
    Print p;
    p.show();             // 0 arguments
    p.show(10);           // 1 int
    p.show("Krish", 18);  // string + int
}
