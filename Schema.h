#include <iostream>
#include <vector>
using namespace std;

class Schema {
public:
    vector<string> Column;
    Schema (const vector<string>& column) : Column(column) {}
};