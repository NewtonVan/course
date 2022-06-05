#ifndef HELLO_H
#define HELLO_H

#include <iostream>
#include <string>

class FB
{
private:
    int num;
public:
    FB(int n);
    ~FB();
    std::string FizzBuzz();
};

#endif