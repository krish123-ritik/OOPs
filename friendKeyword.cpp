#include<iostream>
using namespace std;
class A {
private:
    int x = 5;

    // declare friend
    friend void show(A);
};

void show(A obj) {
    cout << "Private x: " << obj.x << endl;  // access allowed
}

int main() {
    A a;
    show(a);
}
