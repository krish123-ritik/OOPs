#include<iostream>
using namespace std;
class Demo {
public:
    static void hello() {
        cout << "Hello static function!\n";
    }
};

int main() {
    Demo::hello();  // can be called without object
}
