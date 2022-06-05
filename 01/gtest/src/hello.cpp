#include "hello.h"
#include <map>

using std::string;
using std::map;

FB::FB(int n): num(n) {}

FB::~FB() {}

bool mod(int p, int q)
{
    if (0 == p%q) {
        return true;
    }

    return false;
}

std::string FB::FizzBuzz() {
    if (mod(num, 15)) {
        return "fizz buzz";
    }
    if (mod(num, 3)) {
        return "fizz";
    }
    if (mod(num, 5)) {
        return "buzz";
    }

    char buf[100];
    snprintf(buf, sizeof(buf), "%d", num);
    string bufStdStr = string(buf);

    return bufStdStr;
}
