#include <iostream>
#include "hello.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    
    FB robot = FB(x);
    cout << robot.FizzBuzz() << endl;

    return 0;
}
