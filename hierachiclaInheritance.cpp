#include<iostream>
using namespace std;
class Mother {
public:
    void cook() {
        cout << "Mother cooks\n";
    }
};

class Son : public Mother {
public:
    void play() {
        cout << "Son plays\n";
    }
};

class Daughter : public Mother {
public:
    void dance() {
        cout << "Daughter dances\n";
    }
};

int main() {
    Son s;
    s.cook();
    s.play();

    Daughter d;
    d.cook();
    d.dance();
}
