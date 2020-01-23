#ifndef functionsClass
#define functionsClass
#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <tuple>
using namespace std;
class Functions{
    private:
        vector<string> vec;
    public:
        Functions();
        vector<string> duplicate();
        void printNewList(vector<string>);
};
#endif