#pragma once
#include <string>

using namespace std;

class Service {
public:
    Service(string name, string client, int sum, int percent);
    void printData();
private:
    string m_name;
    string m_client;
    int m_sum;
    int m_percent;
};
